//  Copyright (c) 2011 Bryce Lelbach
//  Copyright (c) 2011-2014 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/config.hpp>
#include <hpx/hpx.hpp>
#include <hpx/include/async.hpp>
#include <hpx/runtime/agas/interface.hpp>
#include <hpx/runtime/actions/plain_action.hpp>
#include <hpx/runtime/components/plain_component_factory.hpp>
#include <hpx/runtime/components/server/create_component.hpp>
#include <hpx/components/iostreams/ostream.hpp>
#include <hpx/components/iostreams/standard_streams.hpp>

///////////////////////////////////////////////////////////////////////////////
namespace hpx { namespace iostreams { namespace detail
{
    std::stringstream& get_consolestream()
    {
        static std::stringstream console_stream;
        return console_stream;
    }

    ///////////////////////////////////////////////////////////////////////////
    naming::id_type return_id_type(future<bool> f, naming::id_type id)
    {
        f.get();        //re-throw any errors
        return id;
    }

    ///////////////////////////////////////////////////////////////////////////
    hpx::future<naming::id_type>
    create_ostream(char const* cout_name, std::ostream& strm)
    {
        LRT_(info) << "detail::create_ostream: creating '"
                   << cout_name << "' stream object";

        naming::resolver_client& agas_client = get_runtime().get_agas_client();
        if (agas_client.is_console())
        {
            typedef components::managed_component<server::output_stream>
                ostream_type;

            naming::id_type cout_id(
                components::server::create_with_args<ostream_type>(
                    boost::ref(strm)),
                naming::id_type::managed);

            return agas::register_name(cout_name, cout_id).then(
                util::bind(&return_id_type, util::placeholders::_1, cout_id));
        }

        // the console locality will create the ostream during startup
        return agas::on_symbol_namespace_event(cout_name, agas::symbol_ns_bind, true);
    }
}}}

namespace hpx { namespace iostreams
{
    // force the creation of the singleton stream objects
    void create_cout()
    {
        naming::resolver_client& agas_client = get_runtime().get_agas_client();
        if (!agas_client.is_console())
        {
            HPX_THROW_EXCEPTION(service_unavailable,
                "hpx::iostreams::create_cout",
                "this function should be called on the console only");
        }
        detail::create_ostream(detail::cout_tag());
    }

    void create_cerr()
    {
        naming::resolver_client& agas_client = get_runtime().get_agas_client();
        if (!agas_client.is_console())
        {
            HPX_THROW_EXCEPTION(service_unavailable,
                "hpx::iostreams::create_cerr",
                "this function should be called on the console only");
        }
        detail::create_ostream(detail::cerr_tag());
    }

    void create_consolestream()
    {
        naming::resolver_client& agas_client = get_runtime().get_agas_client();
        if (!agas_client.is_console())
        {
            HPX_THROW_EXCEPTION(service_unavailable,
                "hpx::iostreams::create_consolestream",
                "this function should be called on the console only");
        }
        detail::create_ostream(detail::consolestream_tag());
    }

    std::stringstream const& get_consolestream()
    {
        naming::resolver_client& agas_client = get_runtime().get_agas_client();
        if (!agas_client.is_console())
        {
            HPX_THROW_EXCEPTION(service_unavailable,
                "hpx::iostreams::get_consolestream",
                "this function should be called on the console only");
        }
        return detail::get_consolestream();
    }
}}

///////////////////////////////////////////////////////////////////////////////
HPX_PLAIN_ACTION(hpx::iostreams::create_cout, create_cout_action);
HPX_PLAIN_ACTION(hpx::iostreams::create_cerr, create_cerr_action);
HPX_PLAIN_ACTION(hpx::iostreams::create_consolestream, create_consolestream_action);

///////////////////////////////////////////////////////////////////////////////
namespace hpx
{
    // global standard ostream objects
    iostreams::ostream cout;
    iostreams::ostream cerr;

    // extension: singleton stringstream on console
    iostreams::ostream consolestream;
    std::stringstream const& get_consolestream()
    {
        return iostreams::get_consolestream();
    }
}

