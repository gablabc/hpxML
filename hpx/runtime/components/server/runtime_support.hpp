//  Copyright (c) 2007-2014 Hartmut Kaiser
//  Copyright (c) 2011 Bryce Lelbach
//  Copyright (c) 2011 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_RUNTIME_SUPPORT_JUN_02_2008_1145AM)
#define HPX_RUNTIME_SUPPORT_JUN_02_2008_1145AM

#include <map>
#include <list>
#include <set>

#include <boost/thread.hpp>
#include <boost/thread/condition.hpp>
#include <boost/shared_ptr.hpp>
#include <hpx/util/plugin.hpp>
#include <boost/program_options/options_description.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comma_if.hpp>
#include <boost/preprocessor/enum_params.hpp>
#include <boost/preprocessor/iterate.hpp>

#include <hpx/hpx_fwd.hpp>
#include <hpx/runtime/agas/gva.hpp>
#include <hpx/runtime/components/component_type.hpp>
#include <hpx/runtime/components/component_factory_base.hpp>
#include <hpx/runtime/components/static_component_data.hpp>
#include <hpx/runtime/components/server/create_component_with_args.hpp>
#include <hpx/runtime/actions/component_action.hpp>
#include <hpx/runtime/actions/manage_object_action.hpp>
#include <hpx/performance_counters/counters.hpp>
#include <hpx/lcos/local/spinlock.hpp>
#include <hpx/lcos/local/condition_variable.hpp>

#include <hpx/plugins/plugin_factory_base.hpp>

#include <hpx/config/warnings_prefix.hpp>

namespace hpx { namespace components { namespace server
{
    ///////////////////////////////////////////////////////////////////////////
    class runtime_support
    {
    private:
        typedef lcos::local::spinlock component_map_mutex_type;
        typedef lcos::local::spinlock plugin_map_mutex_type;
        typedef boost::mutex mutex_type;

        struct component_factory
        {
            component_factory() : isenabled(false) {}

            component_factory(
                  boost::shared_ptr<component_factory_base> const& f,
                  hpx::util::plugin::dll const& d, bool enabled = true)
              : first(f), second(d), isenabled(enabled)
            {};

            component_factory(
                  boost::shared_ptr<component_factory_base> const& f,
                  bool enabled = true)
              : first(f), isenabled(enabled)
            {};

            boost::shared_ptr<component_factory_base> first;
            hpx::util::plugin::dll second;
            bool isenabled;
        };
        typedef component_factory component_factory_type;
        typedef std::map<component_type, component_factory_type> component_map_type;

        struct plugin_factory
        {
            plugin_factory(
                  boost::shared_ptr<plugins::plugin_factory_base> const& f,
                  hpx::util::plugin::dll const& d, bool enabled)
              : first(f), second(d), isenabled(enabled)
            {}

            boost::shared_ptr<plugins::plugin_factory_base> first;
            hpx::util::plugin::dll const& second;
            bool isenabled;
        };
        typedef plugin_factory plugin_factory_type;
        typedef std::map<std::string, plugin_factory_type> plugin_map_type;

        typedef std::map<std::string, hpx::util::plugin::dll> modules_map_type;
        typedef std::vector<static_factory_load_data_type> static_modules_type;

    public:
        typedef runtime_support type_holder;

        static component_type get_component_type()
        {
            return components::get_component_type<runtime_support>();
        }
        static void set_component_type(component_type t)
        {
            components::set_component_type<runtime_support>(t);
        }

        // constructor
        runtime_support();

        ~runtime_support()
        {
            tidy();
        }

        /// \brief finalize() will be called just before the instance gets
        ///        destructed
        ///
        /// \param self [in] The HPX \a thread used to execute this function.
        /// \param appl [in] The applier to be used for finalization of the
        ///             component instance.
        void finalize() {}

        void tidy();

        ///////////////////////////////////////////////////////////////////////
        // exposed functionality of this component

        /// \brief Action to figure out, whether we can create more than one
        ///        instance at once
        int factory_properties(components::component_type type);

        /// \brief Action to create N new default constructed components
        std::vector<naming::gid_type> bulk_create_components(
            components::component_type type, std::size_t count);

        /// \brief Actions to create new objects
        template <typename Component>
        naming::gid_type create_component0();

        // bring in all overloads for create_componentN(...)
        #include <hpx/runtime/components/server/runtime_support_create_component_decl.hpp>

        template <typename Component>
        naming::gid_type copy_create_component(
            boost::shared_ptr<Component> const& p, bool);

        template <typename Component>
        naming::gid_type migrate_component_to_here(
            boost::shared_ptr<Component> const& p, naming::id_type);

        /// \brief Action to create new memory block
        naming::gid_type create_memory_block(std::size_t count,
            hpx::actions::manage_object_action_base const& act);

        /// \brief Action to delete existing components
        ///
        /// \param count [in] This GID is a count of the number of components
        ///                   to destroy. It does not represent a global address.
        void free_component(agas::gva const&, naming::gid_type const& gid,
            boost::uint64_t count);

        /// \brief Gracefully shutdown this runtime system instance
        void shutdown(double timeout, naming::id_type const& respond_to);

        /// \brief Gracefully shutdown runtime system instances on all localities
        void shutdown_all(double timeout);

        /// \brief Shutdown this runtime system instance
        void terminate(naming::id_type const& respond_to);

        /// \brief Shutdown runtime system instances on all localities
        void terminate_all();

        /// \brief Retrieve configuration information
        util::section get_config();

        /// \brief Update the given name mapping into the AGAS cache of this
        ///        locality.
        void update_agas_cache_entry(naming::gid_type const&,
            naming::address const&, boost::uint64_t, boost::uint64_t);

        /// \brief Load all components on this locality.
        bool load_components();

        void call_startup_functions(bool pre_startup);
        void call_shutdown_functions(bool pre_shutdown);

        /// \brief Force a garbage collection operation in the AGAS layer.
        void garbage_collect();

        /// \brief Create the given performance counter instance.
        naming::gid_type create_performance_counter(
            performance_counters::counter_info const& info);

        /// \brief Return the current instance count for the given component
        ///        type
        boost::int32_t get_instance_count(components::component_type);

        /// \brief Remove the given locality from our connection cache
        void remove_from_connection_cache(naming::locality const& l);

        /// \brief termination detection
        void dijkstra_termination(boost::uint32_t initiating_locality_id,
            boost::uint32_t num_localities, bool dijkstra_token);

        ///////////////////////////////////////////////////////////////////////
        // Each of the exposed functions needs to be encapsulated into a action
        // type, allowing to generate all require boilerplate code for threads,
        // serialization, etc.
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, factory_properties);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, bulk_create_components);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, create_memory_block);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, load_components);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, call_startup_functions);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, call_shutdown_functions);
        HPX_DEFINE_COMPONENT_DIRECT_ACTION(runtime_support, free_component,
            free_component_action);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, shutdown);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, shutdown_all);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, terminate);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, terminate_all);

        // even if this is not a short/minimal action, we still execute it
        // directly to avoid a deadlock condition inside the thread manager
        // waiting for this thread to finish, which waits for the thread
        // manager to exit
#if defined(HPX_GCC_VERSION) && (HPX_GCC_VERSION <= 40400)
        typedef hpx::actions::direct_result_action0<
            runtime_support, util::section,
            &runtime_support::get_config
        > get_config_action;
#else
        HPX_DEFINE_COMPONENT_DIRECT_ACTION(runtime_support, get_config);
#endif

        HPX_DEFINE_COMPONENT_ACTION(runtime_support, update_agas_cache_entry);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, garbage_collect);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, create_performance_counter);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, get_instance_count);
        HPX_DEFINE_COMPONENT_ACTION(runtime_support, remove_from_connection_cache);

        HPX_DEFINE_COMPONENT_ACTION(runtime_support, dijkstra_termination);

        ///////////////////////////////////////////////////////////////////////
        /// \brief Start the runtime_support component
        void run();

        /// \brief Wait for the runtime_support component to notify the calling
        ///        thread.
        ///
        /// This function will be called from the main thread, causing it to
        /// block while the HPX functionality is executed. The main thread will
        /// block until the shutdown_action is executed, which in turn notifies
        /// all waiting threads.
        void wait();

        /// \brief Notify all waiting (blocking) threads allowing the system to
        ///        be properly stopped.
        ///
        /// \note      This function can be called from any thread.
        void stop(double timeout, naming::id_type const& respond_to,
            bool remove_from_remote_caches);

        /// called locally only
        void stopped();

        bool was_stopped() const { return stopped_; }

        void add_pre_startup_function(HPX_STD_FUNCTION<void()> const& f)
        {
            lcos::local::spinlock::scoped_lock l(globals_mtx_);
            pre_startup_functions_.push_back(f);
        }

        void add_startup_function(HPX_STD_FUNCTION<void()> const& f)
        {
            lcos::local::spinlock::scoped_lock l(globals_mtx_);
            startup_functions_.push_back(f);
        }

        void add_pre_shutdown_function(HPX_STD_FUNCTION<void()> const& f)
        {
            lcos::local::spinlock::scoped_lock l(globals_mtx_);
            pre_shutdown_functions_.push_back(f);
        }

        void add_shutdown_function(HPX_STD_FUNCTION<void()> const& f)
        {
            lcos::local::spinlock::scoped_lock l(globals_mtx_);
            shutdown_functions_.push_back(f);
        }

        bool keep_factory_alive(component_type t);

        void remove_here_from_connection_cache();

        /// This is the default hook implementation for decorate_action which
        /// does no hooking at all.
        static HPX_STD_FUNCTION<threads::thread_function_type>
        wrap_action(HPX_STD_FUNCTION<threads::thread_function_type> f,
            naming::address::address_type)
        {
            return std::move(f);
        }

        ///////////////////////////////////////////////////////////////////////
        parcelset::policies::message_handler* create_message_handler(
            char const* message_handler_type, char const* action,
            parcelset::parcelport* pp, std::size_t num_messages,
            std::size_t interval, error_code& ec);
        util::binary_filter* create_binary_filter(
            char const* binary_filter_type, bool compress,
            util::binary_filter* next_filter, error_code& ec);

        // notify of message being sent
        void dijkstra_make_black();

#if defined(HPX_HAVE_SECURITY)
        components::security::capability get_factory_capabilities(
            components::component_type type);
#endif

        ///////////////////////////////////////////////////////////////////////
        boost::shared_ptr<util::one_size_heap_list_base> get_promise_heap(
            components::component_type type);

    protected:
        // Load all components from the ini files found in the configuration
        bool load_components(util::section& ini, naming::gid_type const& prefix,
            naming::resolver_client& agas_client);
        bool load_component(hpx::util::plugin::dll& d,
            util::section& ini, std::string const& instance,
            std::string const& component, boost::filesystem::path const& lib,
            naming::gid_type const& prefix, naming::resolver_client& agas_client,
            bool isdefault, bool isenabled,
            boost::program_options::options_description& options,
            std::set<std::string>& startup_handled);

        bool load_component_static(
            util::section& ini, std::string const& instance,
            std::string const& component, boost::filesystem::path lib,
            naming::gid_type const& prefix, naming::resolver_client& agas_client,
            bool isdefault, bool isenabled,
            boost::program_options::options_description& options,
            std::set<std::string>& startup_handled);
        bool load_component_dynamic(
            util::section& ini, std::string const& instance,
            std::string const& component, boost::filesystem::path lib,
            naming::gid_type const& prefix, naming::resolver_client& agas_client,
            bool isdefault, bool isenabled,
            boost::program_options::options_description& options,
            std::set<std::string>& startup_handled);

        bool load_startup_shutdown_functions(hpx::util::plugin::dll& d,
            error_code& ec);
        bool load_commandline_options(hpx::util::plugin::dll& d,
            boost::program_options::options_description& options,
            error_code& ec);

        bool load_startup_shutdown_functions_static(std::string const& module,
            error_code& ec);
        bool load_commandline_options_static(
            std::string const& module,
            boost::program_options::options_description& options,
            error_code& ec);

        // Load all plugins from the ini files found in the configuration
        bool load_plugins(util::section& ini);
        bool load_plugin(util::section& ini, std::string const& instance,
            std::string const& component, boost::filesystem::path const& lib,
            bool isenabled);

        // the name says it all
        void dijkstra_termination_detection(boost::uint32_t num_localities);

        void send_dijkstra_termination_token(
            boost::uint32_t target_locality_id,
            boost::uint32_t initiating_locality_id,
            boost::uint32_t num_localities, bool dijkstra_token);

    private:
        mutex_type mtx_;
        boost::condition wait_condition_;
        boost::condition stop_condition_;
        bool stopped_;
        bool terminated_;
        bool dijkstra_color_;   // false: white, true: black

        lcos::local::spinlock dijkstra_mtx_;
        lcos::local::condition_variable dijkstra_cond_;

        component_map_mutex_type cm_mtx_;
        plugin_map_mutex_type p_mtx_;

        component_map_type components_;
        plugin_map_type plugins_;
        modules_map_type modules_;
        static_modules_type static_modules_;

        lcos::local::spinlock globals_mtx_;
        std::list<HPX_STD_FUNCTION<void()> > pre_startup_functions_;
        std::list<HPX_STD_FUNCTION<void()> > startup_functions_;
        std::list<HPX_STD_FUNCTION<void()> > pre_shutdown_functions_;
        std::list<HPX_STD_FUNCTION<void()> > shutdown_functions_;
    };

    ///////////////////////////////////////////////////////////////////////////
    // Functions wrapped by creat_component actions below
    template <typename Component>
    naming::gid_type runtime_support::create_component0()
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();

        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }

        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }

        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);
            id = factory->create();
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);

        return id;
    }

    template <typename Component>
    naming::gid_type runtime_support::copy_create_component(
        boost::shared_ptr<Component> const& p, bool local_op)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();

        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::copy_create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }

        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to create component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::copy_create_component",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }

        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);

            typedef typename Component::wrapping_type wrapping_type;
            if (!local_op) {
                id = factory->create_with_args(
                    component_constructor_functor1<wrapping_type, Component>(
                        std::move(*p))
                );
            }
            else {
                id = factory->create_with_args(
                    component_constructor_functor1<wrapping_type, Component>(*p)
                );
            }
        }
        LRT_(info) << "successfully created component " << id
            << " of type: " << components::get_component_type_name(type);

        return id;
    }

    ///////////////////////////////////////////////////////////////////////////
    template <typename Component>
    naming::gid_type runtime_support::migrate_component_to_here(
        boost::shared_ptr<Component> const& p, naming::id_type to_migrate)
    {
        components::component_type const type =
            components::get_component_type<
                typename Component::wrapped_type>();

        component_map_mutex_type::scoped_lock l(cm_mtx_);
        component_map_type::const_iterator it = components_.find(type);
        if (it == components_.end()) {
            hpx::util::osstream strm;
            strm << "attempt to migrate component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (component type not found in map)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::migrate_component_to_here",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }

        if (!(*it).second.first) {
            hpx::util::osstream strm;
            strm << "attempt to migrate component instance of "
                << "invalid/unknown type: "
                << components::get_component_type_name(type)
                << " (map entry is NULL)";
            HPX_THROW_EXCEPTION(hpx::bad_component_type,
                "runtime_support::migrate_component_to_here",
                hpx::util::osstream_get_string(strm));
            return naming::invalid_gid;
        }

        // create a local instance by copying the bits and remapping the id in
        // AGAS
        naming::gid_type migrated_id = to_migrate.get_gid();

        naming::gid_type id;
        boost::shared_ptr<component_factory_base> factory((*it).second.first);
        {
            util::scoped_unlock<component_map_mutex_type::scoped_lock> ul(l);

            typedef typename Component::wrapping_type wrapping_type;
            id = factory->create_with_args(migrated_id,
                component_constructor_functor1<wrapping_type, Component>(
                    std::move(*p))
            );
        }

        // sanity checks
        if (!id)
        {
            // we should not get here (id should not be invalid)
            HPX_THROW_EXCEPTION(hpx::invalid_status,
                "runtime_support::migrate_component_to_here",
                "could not create copy of given component");
            return naming::invalid_gid;
        }
        if (id != migrated_id)
        {
            // we should not get here either (the ids should be the same)
            HPX_THROW_EXCEPTION(hpx::invalid_status,
                "runtime_support::migrate_component_to_here",
                "could not create copy of given component (the new id is "
                    "different from the original id)");
            return naming::invalid_gid;
        }

        LRT_(info) << "successfully migrated component " << id
            << " of type: " << components::get_component_type_name(type)
            << " to locality: " << find_here();

        to_migrate.make_unmanaged();
        return id;
    }
}}}

#include <hpx/config/warnings_suffix.hpp>

HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::factory_properties_action,
    factory_properties_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::bulk_create_components_action,
    bulk_create_components_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::create_memory_block_action,
    create_memory_block_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::load_components_action,
    load_components_action)
HPX_ACTION_USES_LARGE_STACK(
    hpx::components::server::runtime_support::load_components_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::call_startup_functions_action,
    call_startup_functions_action)
HPX_ACTION_USES_LARGE_STACK(
    hpx::components::server::runtime_support::call_startup_functions_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::call_shutdown_functions_action,
    call_shutdown_functions_action)
HPX_ACTION_USES_LARGE_STACK(
    hpx::components::server::runtime_support::call_shutdown_functions_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::free_component_action,
    free_component_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::shutdown_action,
    shutdown_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::shutdown_all_action,
    shutdown_all_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::terminate_action,
    terminate_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::terminate_all_action,
    terminate_all_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::get_config_action,
    get_config_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::update_agas_cache_entry_action,
    update_agas_cache_entry_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::garbage_collect_action,
    garbage_collect_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::create_performance_counter_action,
    create_performance_counter_action)
HPX_ACTION_USES_MEDIUM_STACK(
    hpx::components::server::runtime_support::create_performance_counter_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::get_instance_count_action,
    get_instance_count_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::remove_from_connection_cache_action,
    remove_from_connection_cache_action)
HPX_REGISTER_ACTION_DECLARATION(
    hpx::components::server::runtime_support::dijkstra_termination_action,
    dijkstra_termination_action)

namespace hpx { namespace components { namespace server
{
#if defined(HPX_GCC_VERSION) && (HPX_GCC_VERSION <= 40400)
    template <typename Component>
    struct copy_create_component_action
      : ::hpx::actions::result_action2<
            runtime_support, naming::gid_type
          , boost::shared_ptr<Component> const&, bool
          , &runtime_support::copy_create_component<Component>
          , copy_create_component_action<Component> >
    {};
    template <typename Component>
    struct migrate_component_here_action
      : ::hpx::actions::result_action2<
            runtime_support, naming::gid_type
          , boost::shared_ptr<Component> const&, naming::id_type
          , &runtime_support::migrate_component_to_here<Component>
          , migrate_component_here_action<Component> >
    {};
#else
    template <typename Component>
    struct copy_create_component_action
      : ::hpx::actions::result_action2<
            naming::gid_type (runtime_support::*)(
                boost::shared_ptr<Component> const&, bool)
          , &runtime_support::copy_create_component<Component>
          , copy_create_component_action<Component> >
    {};
    template <typename Component>
    struct migrate_component_here_action
      : ::hpx::actions::result_action2<
            naming::gid_type (runtime_support::*)(
                boost::shared_ptr<Component> const&, naming::id_type)
          , &runtime_support::migrate_component_to_here<Component>
          , migrate_component_here_action<Component> >
    {};
#endif
}}}

///////////////////////////////////////////////////////////////////////////////
// Termination detection does not make this locality black
namespace hpx { namespace traits
{
    template <>
    struct action_does_termination_detection<
        hpx::components::server::runtime_support::dijkstra_termination_action>
    {
        static bool call()
        {
            return true;
        }
    };
}}

#if defined(HPX_GCC_VERSION) && (HPX_GCC_VERSION <= 40400)
#  include <hpx/runtime/components/server/gcc44/runtime_support_implementations.hpp>
#else
#  include <hpx/runtime/components/server/runtime_support_implementations.hpp>
#endif  // defined(HPX_GCC_VERSION) && (HPX_GCC_VERSION <= 40400)

#if defined(HPX_HAVE_SECURITY)
#  include <hpx/runtime/components/server/runtime_support_create_component_capabilities.hpp>
#endif

#endif  // HPX_RUNTIME_SUPPORT_JUN_02_2008_1145AM

