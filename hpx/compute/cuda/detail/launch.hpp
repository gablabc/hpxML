///////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2016 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
///////////////////////////////////////////////////////////////////////////////

#ifndef HPX_COMPUTE_CUDA_DETAIL_LAUNCH_HPP
#define HPX_COMPUTE_CUDA_DETAIL_LAUNCH_HPP

#include <hpx/config.hpp>

#if defined(HPX_HAVE_CUDA)
#include <hpx/compute/cuda/target.hpp>
#include <hpx/compute/cuda/detail/scoped_active_target.hpp>
#include <hpx/util/deferred_call.hpp>
#include <hpx/util/unused.hpp>

#include <cuda_runtime.h>

#include <iostream>

namespace hpx { namespace compute { namespace cuda { namespace detail
{
    template <typename Closure>
    __global__ void launch_helper(Closure deferred)
    {
        deferred();
    }

    // Launch any given function F with the given parameters. This function does
    // not involve any device synchronization.
    // FIXME: support n-ary closures ...
    template <typename F, typename DimType>//, typename ...Ts>
    void launch(target const& t, DimType gridDim, DimType blockDim, F && f)//,
        //Ts &&... vs)
    {
        detail::scoped_active_target active(t);

//         auto closure = util::deferred_call(std::forward<F>(f),
//             std::forward<Ts>(vs)...);
//         typedef decltype(closure) closure_type;

        typedef typename util::decay<F>::type closure_type;
        void (*launch_function)(closure_type) = launch_helper<closure_type>;

        closure_type closure = std::forward<F>(f);

        launch_function<<<gridDim, blockDim, 0, active.stream()>>>(
            std::move(closure));

        cudaError_t error = cudaGetLastError();
        if(error != cudaSuccess)
        {
            if (error != cudaSuccess)
            {
                std::cout << cudaGetErrorString(error);
                HPX_THROW_EXCEPTION(kernel_error,
                    "cuda::detail::launch()",
                    "kernel launch failed");
            }
        }
    }
}}}}

#endif
#endif
