//  Copyright (c) 2007-2011 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_THROTTLE_STUBS_AUG_09_2011_0703PM)
#define HPX_THROTTLE_STUBS_AUG_09_2011_0703PM

#include <hpx/hpx_fwd.hpp>
#include <hpx/lcos/promise.hpp>
#include <hpx/runtime/components/stubs/stub_base.hpp>

#include "../server/throttle.hpp"

namespace throttle { namespace stubs
{
    ///////////////////////////////////////////////////////////////////////////
    struct throttle : hpx::components::stubs::stub_base<server::throttle>
    {
        ///////////////////////////////////////////////////////////////////////
        static hpx::lcos::promise<void>
        suspend_async(hpx::naming::id_type const& gid, std::size_t thread_num)
        {
            // Create an eager_future, execute the required action,
            // we simply return the initialized promise, the caller needs
            // to call get() on the return value to obtain the result
            typedef server::throttle::suspend_action action_type;
            return hpx::lcos::eager_future<action_type>(gid, thread_num);
        }

        static void
        suspend(hpx::naming::id_type const& gid, std::size_t thread_num)
        {
            suspend_async(gid, thread_num).get();
        }

        ///////////////////////////////////////////////////////////////////////
        static hpx::lcos::promise<void>
        resume_async(hpx::naming::id_type const& gid, std::size_t thread_num)
        {
            // Create an eager_future, execute the required action,
            // we simply return the initialized promise, the caller needs
            // to call get() on the return value to obtain the result
            typedef server::throttle::resume_action action_type;
            return hpx::lcos::eager_future<action_type>(gid, thread_num);
        }

        static void
        resume(hpx::naming::id_type const& gid, std::size_t thread_num)
        {
            resume_async(gid, thread_num).get();
        }
    };
}}

#endif
