////////////////////////////////////////////////////////////////////////////////
//  Copyright (c) 2011 Bryce Adelstein-Lelbach
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

#if !defined(HPX_5D993B14_5B65_4231_A84E_90AD1807EB8F)
#define HPX_5D993B14_5B65_4231_A84E_90AD1807EB8F

#include <hpx/hpx_fwd.hpp>
#include <hpx/include/async.hpp>
#include <hpx/runtime/agas/server/primary_namespace.hpp>

namespace hpx { namespace agas { namespace stubs
{

struct HPX_EXPORT primary_namespace
{
    typedef server::primary_namespace server_type;
    typedef server::primary_namespace server_component_type;

    ///////////////////////////////////////////////////////////////////////////
    template <
        typename Result
    >
    static lcos::future<Result> service_async(
        naming::id_type const& gid
      , request const& req
      , threads::thread_priority priority = threads::thread_priority_default
        )
    {
        typedef server_type::service_action action_type;

        lcos::packaged_action<action_type, Result> p;
        p.apply_p(gid, priority, req);
        return p.get_future();
    }

    /// Fire-and-forget semantics.
    ///
    /// \note This is placed out of line to avoid including applier headers.
    static void service_non_blocking(
        naming::id_type const& gid
      , request const& req
      , threads::thread_priority priority = threads::thread_priority_default
        );

    static void service_non_blocking(
        naming::id_type const& gid
      , request const& req
      , HPX_STD_FUNCTION<void(boost::system::error_code const&, std::size_t)> const& f
      , threads::thread_priority priority = threads::thread_priority_default
        );

    static response service(
        naming::id_type const& gid
      , request const& req
      , threads::thread_priority priority = threads::thread_priority_default
      , error_code& ec = throws
        )
    {
        return service_async<response>(gid, req, priority).get(ec);
    }

    ///////////////////////////////////////////////////////////////////////////
    static lcos::future<std::vector<response> > bulk_service_async(
        naming::id_type const& gid
      , std::vector<request> const& reqs
      , threads::thread_priority priority = threads::thread_priority_default
        )
    {
        typedef server_type::bulk_service_action action_type;

        lcos::packaged_action<action_type> p;
        p.apply_p(gid, priority, reqs);
        return p.get_future();
    }

    /// Fire-and-forget semantics.
    ///
    /// \note This is placed out of line to avoid including applier headers.
    static void bulk_service_non_blocking(
        naming::id_type const& gid
      , std::vector<request> const& reqs
      , threads::thread_priority priority = threads::thread_priority_default
        );

    static std::vector<response> bulk_service(
        naming::id_type const& gid
      , std::vector<request> const& reqs
      , threads::thread_priority priority = threads::thread_priority_default
      , error_code& ec = throws
        )
    {
        return bulk_service_async(gid, reqs, priority).get(ec);
    }

    static naming::gid_type get_service_instance(naming::gid_type const& dest)
    {
        boost::uint32_t service_locality_id = naming::get_locality_id_from_gid(dest);
        naming::gid_type service(HPX_AGAS_PRIMARY_NS_MSB, HPX_AGAS_PRIMARY_NS_LSB);
        return naming::replace_locality_id(service, service_locality_id);
    }
};

}}}

#endif // HPX_5D993B14_5B65_4231_A84E_90AD1807EB8F

