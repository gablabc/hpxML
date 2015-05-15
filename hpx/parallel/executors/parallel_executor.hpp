//  Copyright (c) 2007-2015 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// \file parallel/executors/parallel_executor.hpp

#if !defined(HPX_PARALLEL_EXECUTORS_PARALLEL_EXECUTOR_MAY_13_2015_1057AM)
#define HPX_PARALLEL_EXECUTORS_PARALLEL_EXECUTOR_MAY_13_2015_1057AM

#include <hpx/config.hpp>
#include <hpx/parallel/config/inline_namespace.hpp>
#include <hpx/parallel/executors/executor_traits.hpp>
#include <hpx/runtime/threads/thread_executor.hpp>
#include <hpx/util/move.hpp>

#include <type_traits>

namespace hpx { namespace parallel { HPX_INLINE_NAMESPACE(v3)
{
    ///////////////////////////////////////////////////////////////////////////
    struct parallel_executor
    {
        template <typename F>
        hpx::future<typename hpx::util::result_of<F()>::type>
        async_execute(F f)
        {
            return hpx::async(launch::async, std::move(f));
        }
    };

    namespace detail
    {
        /// \cond NOINTERNAL
        template <>
        struct is_executor<parallel_executor>
          : std::true_type
        {};
        /// \endcond
    }
}}}

#endif
