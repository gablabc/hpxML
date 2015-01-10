//  Copyright (c) 2007-2014 Hartmut Kaiser
//  Copyright (c)      2011 Bryce Lelbach
//  Copyright (c)      2011 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// \file action_support.hpp

#if !defined(HPX_RUNTIME_ACTIONS_ACTION_SUPPORT_NOV_14_2008_0711PM)
#define HPX_RUNTIME_ACTIONS_ACTION_SUPPORT_NOV_14_2008_0711PM

#include <hpx/hpx_fwd.hpp>
#include <hpx/config.hpp>
#include <hpx/config/bind.hpp>
#include <hpx/config/tuple.hpp>
#include <hpx/config/function.hpp>
#include <hpx/util/deferred_call.hpp>
#include <hpx/util/move.hpp>
#include <hpx/util/deferred_call.hpp>
#include <hpx/traits/action_priority.hpp>
#include <hpx/traits/action_stacksize.hpp>
#include <hpx/traits/action_serialization_filter.hpp>
#include <hpx/traits/action_message_handler.hpp>
#include <hpx/traits/action_may_require_id_splitting.hpp>
#include <hpx/traits/action_does_termination_detection.hpp>
#include <hpx/traits/action_is_target_valid.hpp>
#include <hpx/traits/action_decorate_function.hpp>
#include <hpx/traits/action_decorate_continuation.hpp>
#include <hpx/traits/action_schedule_thread.hpp>
#include <hpx/traits/future_traits.hpp>
#include <hpx/traits/is_future.hpp>
#include <hpx/traits/type_size.hpp>
#include <hpx/runtime/get_lva.hpp>
#include <hpx/runtime/threads/thread_helpers.hpp>
#include <hpx/runtime/threads/thread_init_data.hpp>
#include <hpx/runtime/actions/continuation.hpp>
#include <hpx/util/polymorphic_factory.hpp>
#include <hpx/util/serialize_sequence.hpp>
#include <hpx/util/serialize_exception.hpp>
#include <hpx/util/demangle_helper.hpp>
#include <hpx/util/register_locks.hpp>
#include <hpx/util/decay.hpp>
#include <hpx/util/detail/count_num_args.hpp>
#include <hpx/util/detail/serialization_registration.hpp>
#include <hpx/util/static.hpp>
#include <hpx/lcos/async_fwd.hpp>
#include <hpx/lcos/future.hpp>

#if defined(HPX_HAVE_SECURITY)
#include <hpx/traits/action_capability_provider.hpp>
#endif

#include <boost/version.hpp>
#include <boost/fusion/include/at.hpp>
#include <boost/fusion/include/at_c.hpp>
#include <boost/fusion/include/for_each.hpp>
#include <boost/fusion/include/size.hpp>
#include <boost/fusion/include/transform_view.hpp>
#include <boost/ref.hpp>
#include <boost/foreach.hpp>
#include <boost/serialization/access.hpp>
#include <boost/serialization/is_bitwise_serializable.hpp>
#include <boost/serialization/array.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/is_convertible.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/preprocessor/cat.hpp>

#include <sstream>

#include <hpx/config/warnings_prefix.hpp>

/// \cond NOINTERNAL
namespace hpx { namespace actions { namespace detail
{
    struct action_serialization_data
    {
        boost::uint64_t parent_id_;
        boost::uint64_t parent_phase_;
        boost::uint32_t parent_locality_;
        boost::uint16_t priority_;
        boost::uint16_t stacksize_;
    };
}}}

namespace boost { namespace serialization
{
    template <>
    struct is_bitwise_serializable<
            hpx::actions::detail::action_serialization_data>
       : boost::mpl::true_
    {};
}}

/// \endcond

///////////////////////////////////////////////////////////////////////////////
namespace hpx { namespace actions
{
    /// \cond NOINTERNAL

    struct base_action;

    ///////////////////////////////////////////////////////////////////////////
    namespace detail
    {
        template <typename Action>
        char const* get_action_name()
#ifdef HPX_DISABLE_AUTOMATIC_SERIALIZATION_REGISTRATION
        ;
#else
        {
            /// If you encounter this assert while compiling code, that means that
            /// you have a HPX_REGISTER_ACTION macro somewhere in a source file,
            /// but the header in which the action is defined misses a
            /// HPX_REGISTER_ACTION_DECLARATION
            BOOST_MPL_ASSERT_MSG(
                traits::needs_automatic_registration<Action>::value
              , HPX_REGISTER_ACTION_DECLARATION_MISSING
              , (Action)
            );
            return util::type_id<Action>::typeid_.type_id();
        }
#endif

        ///////////////////////////////////////////////////////////////////////
        // If an action returns a future, we need to do special things
        template <typename Result>
        struct remote_action_result
        {
            typedef Result type;
        };

        template <>
        struct remote_action_result<void>
        {
            typedef util::unused_type type;
        };

        template <typename Result>
        struct remote_action_result<lcos::future<Result> >
        {
            typedef Result type;
        };

        template <>
        struct remote_action_result<lcos::future<void> >
        {
            typedef hpx::util::unused_type type;
        };

        template <typename Result>
        struct remote_action_result<lcos::shared_future<Result> >
        {
            typedef Result type;
        };

        template <>
        struct remote_action_result<lcos::shared_future<void> >
        {
            typedef hpx::util::unused_type type;
        };

        ///////////////////////////////////////////////////////////////////////
        template <typename Action>
        struct action_registration
        {
            static boost::shared_ptr<base_action> create()
            {
                return boost::shared_ptr<base_action>(new Action());
            }

            action_registration()
            {
                util::polymorphic_factory<base_action>::get_instance().
                    add_factory_function(
                        detail::get_action_name<typename Action::derived_type>()
                      , &action_registration::create
                    );
            }
        };

        template <typename Action, typename Enable =
            typename traits::needs_automatic_registration<Action>::type>
        struct automatic_action_registration
        {
            automatic_action_registration()
            {
                action_registration<Action> auto_register;
            }

            automatic_action_registration & register_action()
            {
                return *this;
            }
        };

        template <typename Action>
        struct automatic_action_registration<Action, boost::mpl::false_>
        {
            automatic_action_registration()
            {
            }

            automatic_action_registration & register_action()
            {
                return *this;
            }
        };
    }

    ///////////////////////////////////////////////////////////////////////////
    /// The \a base_action class is an abstract class used as the base class
    /// for all action types. It's main purpose is to allow polymorphic
    /// serialization of action instances through a shared_ptr.
    struct base_action
    {
        /// The type of an action defines whether this action will be executed
        /// directly or by a HPX-threads
        enum action_type
        {
            plain_action = 0,   ///< The action will be executed by a newly created thread
            direct_action = 1   ///< The action needs to be executed directly
        };

        /// Destructor
        virtual ~base_action() {}

        /// The function \a get_component_type returns the \a component_type
        /// of the component this action belongs to.
        virtual int get_component_type() const = 0;

        /// The function \a get_action_name returns the name of this action
        /// (mainly used for debugging and logging purposes).
        virtual char const* get_action_name() const = 0;

        /// The function \a get_action_type returns whether this action needs
        /// to be executed in a new thread or directly.
        virtual action_type get_action_type() const = 0;

        /// The \a get_thread_function constructs a proper thread function for
        /// a \a thread, encapsulating the functionality and the arguments
        /// of the action it is called for.
        ///
        /// \param lva    [in] This is the local virtual address of the
        ///               component the action has to be invoked on.
        ///
        /// \returns      This function returns a proper thread function usable
        ///               for a \a thread.
        ///
        /// \note This \a get_thread_function will be invoked to retrieve the
        ///       thread function for an action which has to be invoked without
        ///       continuations.
        virtual threads::thread_function_type
            get_thread_function(naming::address::address_type lva) = 0;

        /// The \a get_thread_function constructs a proper thread function for
        /// a \a thread, encapsulating the functionality, the arguments, and
        /// the continuations of the action it is called for.
        ///
        /// \param cont   [in] This is the list of continuations to be
        ///               triggered after the execution of the action
        /// \param lva    [in] This is the local virtual address of the
        ///               component the action has to be invoked on.
        ///
        /// \returns      This function returns a proper thread function usable
        ///               for a \a thread.
        ///
        /// \note This \a get_thread_function will be invoked to retrieve the
        ///       thread function for an action which has to be invoked with
        ///       continuations.
        virtual threads::thread_function_type
            get_thread_function(continuation_type& cont,
                naming::address::address_type lva) = 0;

        /// return the id of the locality of the parent thread
        virtual boost::uint32_t get_parent_locality_id() const = 0;

        /// Return the thread id of the parent thread
        virtual threads::thread_id_repr_type get_parent_thread_id() const = 0;

        /// Return the thread phase of the parent thread
        virtual boost::uint64_t get_parent_thread_phase() const = 0;

        /// Return the thread priority this action has to be executed with
        virtual threads::thread_priority get_thread_priority() const = 0;

        /// Return the thread stacksize this action has to be executed with
        virtual threads::thread_stacksize get_thread_stacksize() const = 0;

        /// Return the size of action arguments in bytes
        virtual std::size_t get_type_size() const = 0;

        /// Return whether the embedded action may require id-splitting
        virtual bool may_require_id_splitting() const = 0;

        /// Return whether the embedded action is part of termination detection
        virtual bool does_termination_detection() const = 0;

        virtual void load(hpx::util::portable_binary_iarchive & ar) = 0;
        virtual void save(hpx::util::portable_binary_oarchive & ar) const = 0;

        /// Wait for embedded futures to become ready
        virtual void wait_for_futures() = 0;

//         /// Return all data needed for thread initialization
//         virtual threads::thread_init_data&
//         get_thread_init_data(naming::id_type const& target,
//             naming::address::address_type lva, threads::thread_init_data& data) = 0;
//
//         virtual threads::thread_init_data&
//         get_thread_init_data(continuation_type& cont,
//             naming::id_type const& target, naming::address::address_type lva,
//             threads::thread_init_data& data) = 0;

        /// Return all data needed for thread initialization
        virtual void schedule_thread(naming::id_type const& target,
            naming::address::address_type lva,
            threads::thread_state_enum initial_state) = 0;

        virtual void schedule_thread(continuation_type& cont,
            naming::id_type const& target, naming::address::address_type lva,
            threads::thread_state_enum initial_state) = 0;

        /// Return a pointer to the filter to be used while serializing an
        /// instance of this action type.
        virtual util::binary_filter* get_serialization_filter(
            parcelset::parcel const& p) const = 0;

        /// Return a pointer to the message handler to be used for this action.
        virtual parcelset::policies::message_handler* get_message_handler(
            parcelset::parcelhandler* ph, parcelset::locality const& loc,
            parcelset::parcel const& p) const = 0;

#if defined(HPX_HAVE_SECURITY)
        /// Return the set of capabilities required to invoke this action
        virtual components::security::capability get_required_capabilities(
            naming::address::address_type lva) const = 0;
#endif
    };

    ///////////////////////////////////////////////////////////////////////////
    namespace detail
    {
        ///////////////////////////////////////////////////////////////////////
        // Figure out what priority the action has to be be associated with
        // A dynamically specified default priority results in using the static
        // Priority.
        template <threads::thread_priority Priority>
        struct thread_priority
        {
            static threads::thread_priority
            call(threads::thread_priority priority)
            {
                if (priority == threads::thread_priority_default)
                    return Priority;
                return priority;
            }
        };

        // If the static Priority is default, a dynamically specified default
        // priority results in using the normal priority.
        template <>
        struct thread_priority<threads::thread_priority_default>
        {
            static threads::thread_priority
            call(threads::thread_priority priority)
            {
                if (priority == threads::thread_priority_default)
                    return threads::thread_priority_normal;
                return priority;
            }
        };

        ///////////////////////////////////////////////////////////////////////
        // Figure out what stacksize the action has to be be associated with
        // A dynamically specified default stacksize results in using the static
        // Stacksize.
        template <threads::thread_stacksize Stacksize>
        struct thread_stacksize
        {
            static threads::thread_stacksize
            call(threads::thread_stacksize stacksize)
            {
                if (stacksize == threads::thread_stacksize_default)
                    return Stacksize;
                return stacksize;
            }
        };

        // If the static Stacksize is default, a dynamically specified default
        // stacksize results in using the normal stacksize.
        template <>
        struct thread_stacksize<threads::thread_stacksize_default>
        {
            static threads::thread_stacksize
            call(threads::thread_stacksize stacksize)
            {
                if (stacksize == threads::thread_stacksize_default)
                    return threads::thread_stacksize_minimal;
                return stacksize;
            }
        };
    }

    template <typename Action>
    struct init_registration;

    ///////////////////////////////////////////////////////////////////////////
    template <typename Action>
    struct transfer_action : base_action
    {
        HPX_MOVABLE_BUT_NOT_COPYABLE(transfer_action);

    public:
        typedef typename Action::component_type component_type;
        typedef typename Action::derived_type derived_type;
        typedef typename Action::result_type result_type;
        typedef typename Action::arguments_type arguments_type;

        // This is the priority value this action has been instantiated with
        // (statically). This value might be different from the priority member
        // holding the runtime value an action has been created with
        enum { priority_value = traits::action_priority<Action>::value };

        // This is the stacksize value this action has been instantiated with
        // (statically). This value might be different from the stacksize member
        // holding the runtime value an action has been created with
        enum { stacksize_value = traits::action_stacksize<Action>::value };

        typedef typename Action::direct_execution direct_execution;

        // default constructor is needed for serialization
        transfer_action() {}

        // construct an action from its arguments
        template <typename Args>
        explicit transfer_action(Args && args)
          : arguments_(std::forward<Args>(args)),
#if defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
            parent_locality_(transfer_action::get_locality_id()),
            parent_id_(reinterpret_cast<boost::uint64_t>(threads::get_parent_id())),
            parent_phase_(threads::get_parent_phase()),
#endif
            priority_(
                detail::thread_priority<
                    static_cast<threads::thread_priority>(priority_value)
                >::call(threads::thread_priority_default)),
            stacksize_(
                detail::thread_stacksize<
                    static_cast<threads::thread_stacksize>(stacksize_value)
                >::call(threads::thread_stacksize_default))
        {}

        template <typename Args>
        transfer_action(threads::thread_priority priority, Args && args)
          : arguments_(std::forward<Args>(args)),
#if defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
            parent_locality_(transfer_action::get_locality_id()),
            parent_id_(reinterpret_cast<boost::uint64_t>(threads::get_parent_id())),
            parent_phase_(threads::get_parent_phase()),
#endif
            priority_(
                detail::thread_priority<
                    static_cast<threads::thread_priority>(priority_value)
                >::call(priority)),
            stacksize_(
                detail::thread_stacksize<
                    static_cast<threads::thread_stacksize>(stacksize_value)
                >::call(threads::thread_stacksize_default))
        {}

        //
        ~transfer_action()
        {
            init_registration<transfer_action<Action> >::g.register_action();
        }

    public:
        /// retrieve component type
        static int get_static_component_type()
        {
            return derived_type::get_component_type();
        }

    private:
        /// The function \a get_component_type returns the \a component_type
        /// of the component this action belongs to.
        int get_component_type() const
        {
            return derived_type::get_component_type();
        }

        /// The function \a get_action_name returns the name of this action
        /// (mainly used for debugging and logging purposes).
        char const* get_action_name() const
        {
            return detail::get_action_name<derived_type>();
        }

        /// The function \a get_action_type returns whether this action needs
        /// to be executed in a new thread or directly.
        action_type get_action_type() const
        {
            return derived_type::get_action_type();
        }

        /// The \a get_thread_function constructs a proper thread function for
        /// a \a thread, encapsulating the functionality and the arguments
        /// of the action it is called for.
        ///
        /// \param lva    [in] This is the local virtual address of the
        ///               component the action has to be invoked on.
        ///
        /// \returns      This function returns a proper thread function usable
        ///               for a \a thread.
        ///
        /// \note This \a get_thread_function will be invoked to retrieve the
        ///       thread function for an action which has to be invoked without
        ///       continuations.
        template <std::size_t ...Is>
        threads::thread_function_type
        get_thread_function(util::detail::pack_c<std::size_t, Is...>,
            naming::address::address_type lva)
        {
            return derived_type::construct_thread_function(lva,
                util::get<Is>(std::move(arguments_))...);
        }

        threads::thread_function_type
        get_thread_function(naming::address::address_type lva)
        {
            return get_thread_function(
                typename util::detail::make_index_pack<Action::arity>::type(),
                lva);
        }

        /// The \a get_thread_function constructs a proper thread function for
        /// a \a thread, encapsulating the functionality, the arguments, and
        /// the continuations of the action it is called for.
        ///
        /// \param cont   [in] This is the list of continuations to be
        ///               triggered after the execution of the action
        /// \param lva    [in] This is the local virtual address of the
        ///               component the action has to be invoked on.
        ///
        /// \returns      This function returns a proper thread function usable
        ///               for a \a thread.
        ///
        /// \note This \a get_thread_function will be invoked to retrieve the
        ///       thread function for an action which has to be invoked with
        ///       continuations.
        template <std::size_t ...Is>
        threads::thread_function_type
        get_thread_function(util::detail::pack_c<std::size_t, Is...>,
            continuation_type& cont, naming::address::address_type lva)
        {
            return derived_type::construct_thread_function(cont, lva,
                util::get<Is>(std::move(arguments_))...);
        }

        threads::thread_function_type
        get_thread_function(continuation_type& cont,
            naming::address::address_type lva)
        {
            return get_thread_function(
                typename util::detail::make_index_pack<Action::arity>::type(),
                cont, lva);
        }

#if !defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
        /// Return the locality of the parent thread
        boost::uint32_t get_parent_locality_id() const
        {
            return naming::invalid_locality_id;
        }

        /// Return the thread id of the parent thread
        threads::thread_id_repr_type get_parent_thread_id() const
        {
            return threads::invalid_thread_id_repr;
        }

        /// Return the phase of the parent thread
        boost::uint64_t get_parent_thread_phase() const
        {
            return 0;
        }
#else
        /// Return the locality of the parent thread
        boost::uint32_t get_parent_locality_id() const
        {
            return parent_locality_;
        }

        /// Return the thread id of the parent thread
        threads::thread_id_repr_type get_parent_thread_id() const
        {
            return reinterpret_cast<threads::thread_id_repr_type>(parent_id_);
        }

        /// Return the phase of the parent thread
        boost::uint64_t get_parent_thread_phase() const
        {
            return parent_phase_;
        }
#endif

        /// Return the thread priority this action has to be executed with
        threads::thread_priority get_thread_priority() const
        {
            return priority_;
        }

        /// Return the thread stacksize this action has to be executed with
        threads::thread_stacksize get_thread_stacksize() const
        {
            return stacksize_;
        }

        /// Return the size of action arguments in bytes
        std::size_t get_type_size() const
        {
            return traits::type_size<arguments_type>::call(arguments_);
        }

        /// Return whether the embedded action may require id-splitting
        bool may_require_id_splitting() const
        {
            return traits::action_may_require_id_splitting<derived_type>::call(arguments_);
        }

        /// Wait for embedded futures to become ready
        void wait_for_futures()
        {
            traits::serialize_as_future<arguments_type>::call(arguments_);
        }

        /// Return whether the embedded action is part of termination detection
        bool does_termination_detection() const
        {
            return traits::action_does_termination_detection<derived_type>::call();
        }

        /// Return all data needed for thread initialization
        threads::thread_init_data&
        get_thread_init_data(naming::id_type const& target,
            naming::address::address_type lva, threads::thread_init_data& data)
        {
            data.func = get_thread_function(lva);
#if defined(HPX_THREAD_MAINTAIN_TARGET_ADDRESS)
            data.lva = lva;
#endif
#if defined(HPX_THREAD_MAINTAIN_DESCRIPTION)
            data.description = detail::get_action_name<derived_type>();
#endif
#if defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
            data.parent_id = reinterpret_cast<threads::thread_id_repr_type>(parent_id_);
            data.parent_locality_id = parent_locality_;
#endif
            data.priority = priority_;
            data.stacksize = threads::get_stack_size(stacksize_);

            data.target = target;
            return data;
        }

        threads::thread_init_data&
        get_thread_init_data(continuation_type& cont, naming::id_type const& target,
            naming::address::address_type lva, threads::thread_init_data& data)
        {
            data.func = get_thread_function(cont, lva);
#if defined(HPX_THREAD_MAINTAIN_TARGET_ADDRESS)
            data.lva = lva;
#endif
#if defined(HPX_THREAD_MAINTAIN_DESCRIPTION)
            data.description = detail::get_action_name<derived_type>();
#endif
#if defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
            data.parent_id = reinterpret_cast<threads::thread_id_repr_type>(parent_id_);
            data.parent_locality_id = parent_locality_;
#endif
            data.priority = priority_;
            data.stacksize = threads::get_stack_size(stacksize_);

            data.target = target;
            return data;
        }

        // schedule a new thread
        void schedule_thread(naming::id_type const& target,
            naming::address::address_type lva,
            threads::thread_state_enum initial_state)
        {
            continuation_type cont;
            threads::thread_init_data data;
            if (traits::action_decorate_continuation<derived_type>::call(cont))
            {
                traits::action_schedule_thread<derived_type>::call(lva,
                    get_thread_init_data(cont, target, lva, data), initial_state);
            }
            else
            {
                traits::action_schedule_thread<derived_type>::call(lva,
                    get_thread_init_data(target, lva, data), initial_state);
            }
        }

        void schedule_thread(continuation_type& cont,
            naming::id_type const& target, naming::address::address_type lva,
            threads::thread_state_enum initial_state)
        {
            // first decorate the continuation
            traits::action_decorate_continuation<derived_type>::call(cont);

            // now, schedule the thread
            threads::thread_init_data data;
            traits::action_schedule_thread<derived_type>::call(lva,
                get_thread_init_data(cont, target, lva, data), initial_state);
        }

        /// Return a pointer to the filter to be used while serializing an
        /// instance of this action type.
        util::binary_filter* get_serialization_filter(
            parcelset::parcel const& p) const
        {
            return traits::action_serialization_filter<derived_type>::call(p);
        }

        /// Return a pointer to the message handler to be used for this action.
        parcelset::policies::message_handler* get_message_handler(
            parcelset::parcelhandler* ph, parcelset::locality const& loc,
            parcelset::parcel const& p) const
        {
            return traits::action_message_handler<derived_type>::
                call(ph, loc, p);
        }

#if defined(HPX_HAVE_SECURITY)
        /// Return the set of capabilities required to invoke this action
        components::security::capability get_required_capabilities(
            naming::address::address_type lva) const
        {
            return traits::action_capability_provider<derived_type>::call(lva);
        }
#endif
    public:
        /// retrieve the N's argument
        template <int N>
        typename boost::fusion::result_of::at_c<arguments_type, N>::type
        get()
        {
            return boost::fusion::at_c<N>(arguments_);
        }

        // serialization support
        void load(hpx::util::portable_binary_iarchive & ar)
        {
            util::serialize_sequence(ar, arguments_);

            // Always serialize the parent information to maintain binary
            // compatibility on the wire.

            if (ar.flags() & util::disable_array_optimization) {
#if !defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
                boost::uint32_t parent_locality_ = naming::invalid_locality_id;
                boost::uint64_t parent_id_ = boost::uint64_t(-1);
                boost::uint64_t parent_phase_ = 0;
#endif
                ar >> parent_locality_;
                ar >> parent_id_;
                ar >> parent_phase_;

                ar >> priority_;
                ar >> stacksize_;
            }
            else {
                detail::action_serialization_data data;
                ar.load(data);

#if defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
                parent_id_ = data.parent_id_;
                parent_phase_ = data.parent_phase_;
                parent_locality_ = data.parent_locality_;
#endif
                priority_ = static_cast<threads::thread_priority>(data.priority_);
                stacksize_ = static_cast<threads::thread_stacksize>(data.stacksize_);
            }
        }

        void save(hpx::util::portable_binary_oarchive & ar) const
        {
            util::serialize_sequence(ar, arguments_);

            // Always serialize the parent information to maintain binary
            // compatibility on the wire.

#if !defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
            boost::uint32_t parent_locality_ = naming::invalid_locality_id;
            boost::uint64_t parent_id_ = boost::uint64_t(-1);
            boost::uint64_t parent_phase_ = 0;
#endif
            if (ar.flags() & util::disable_array_optimization) {
                ar << parent_locality_;
                ar << parent_id_;
                ar << parent_phase_;

                ar << priority_;
                ar << stacksize_;
            }
            else {
                detail::action_serialization_data data;
                data.parent_id_ = parent_id_;
                data.parent_phase_ = parent_phase_;
                data.parent_locality_ = parent_locality_;
                data.priority_ = priority_;
                data.stacksize_ = stacksize_;

                ar.save(data);
            }
        }

    private:
        static boost::uint32_t get_locality_id()
        {
            error_code ec(lightweight);      // ignore any errors
            return hpx::get_locality_id(ec);
        }

    protected:
        arguments_type arguments_;

#if defined(HPX_THREAD_MAINTAIN_PARENT_REFERENCE)
        boost::uint32_t parent_locality_;
        boost::uint64_t parent_id_;
        boost::uint64_t parent_phase_;
#endif
        threads::thread_priority priority_;
        threads::thread_stacksize stacksize_;
    };

    ///////////////////////////////////////////////////////////////////////////
    template <int N, typename Action>
    inline typename boost::fusion::result_of::at_c<
        typename transfer_action<Action>::arguments_type, N
    >::type
    get(transfer_action<Action> & args)
    {
        return args.template get<N>();
    }

    ///////////////////////////////////////////////////////////////////////////
    namespace detail
    {
        template <typename Action>
        struct continuation_thread_function
        {
            typedef threads::thread_state_enum result_type;

            template <typename F>
            BOOST_FORCEINLINE result_type operator()(continuation_type cont,
                naming::address::address_type lva, F&& f) const
            {
                if (LHPX_ENABLED(debug))
                {
                    LTM_(debug) << "Executing " << Action::get_action_name(lva)
                        << " with continuation(" << cont->get_gid() << ")";
                }

                actions::trigger(*cont, std::forward<F>(f));
                return threads::terminated;
            }
        };

        ///////////////////////////////////////////////////////////////////////
        template <typename Action, typename F>
        threads::thread_function_type
        construct_continuation_thread_function(continuation_type cont,
            naming::address::address_type lva, F&& f)
        {
            return util::bind(
                util::one_shot(continuation_thread_function<Action>()),
                std::move(cont), lva, std::forward<F>(f));
        }
    }

    ///////////////////////////////////////////////////////////////////////////
    /// \tparam Component         component type
    /// \tparam Signature         return type and arguments
    /// \tparam Derived           derived action class
    template <typename Component, typename Signature, typename Derived>
    struct basic_action;

    template <typename Component, typename R, typename ...Args, typename Derived>
    struct basic_action<Component, R(Args...), Derived>
    {
        typedef Component component_type;
        typedef Derived derived_type;

        typedef typename boost::mpl::if_c<
            boost::is_void<R>::value, util::unused_type, R
        >::type result_type;
        typedef typename traits::promise_local_result<R>::type local_result_type;
        typedef typename detail::remote_action_result<R>::type remote_result_type;

        static const std::size_t arity = sizeof...(Args);
        typedef util::tuple<typename util::decay<Args>::type...> arguments_type;

        typedef void action_tag;

        ///////////////////////////////////////////////////////////////////////
        static std::string get_action_name(naming::address::address_type /*lva*/)
        {
            std::stringstream name;
            name << "action(" << detail::get_action_name<Derived>() << ")";
            return name.str();
        }

        static bool is_target_valid(naming::id_type const& id)
        {
            return true;        // by default we don't do any verification
        }

        template <typename ...Ts>
        static R invoke(naming::address::address_type /*lva*/, Ts&&... /*vs*/);

    protected:
        struct invoker
        {
            template <typename ...Ts>
            typename boost::disable_if_c<
                (boost::is_void<R>::value && util::detail::pack<Ts...>::size >= 0),
                result_type
            >::type operator()(
                naming::address::address_type lva, Ts&&... vs) const
            {
                return Derived::invoke(lva, std::forward<Ts>(vs)...);
            }

            template <typename ...Ts>
            typename boost::enable_if_c<
                (boost::is_void<R>::value && util::detail::pack<Ts...>::size >= 0),
                result_type
            >::type operator()(
                naming::address::address_type lva, Ts&&... vs) const
            {
                Derived::invoke(lva, std::forward<Ts>(vs)...);
                return util::unused;
            }
        };

        /// The \a thread_function will be registered as the thread
        /// function of a thread. It encapsulates the execution of the
        /// original function (given by \a func).
        struct thread_function
        {
            typedef threads::thread_state_enum result_type;

            template <typename ...Ts>
            BOOST_FORCEINLINE result_type operator()(
                naming::address::address_type lva, Ts&&... vs) const
            {
                try {
                    if (LHPX_ENABLED(debug))
                    {
                        LTM_(debug) << "Executing "
                            << Derived::get_action_name(lva) << ".";
                    }

                    // call the function, ignoring the return value
                    Derived::invoke(lva, std::forward<Ts>(vs)...);
                }
                catch (hpx::thread_interrupted const&) { //-V565
                    /* swallow this exception */
                }
                catch (hpx::exception const& e) {
                    LTM_(error)
                        << "Unhandled exception while executing "
                        << Derived::get_action_name(lva) << ": " << e.what();

                    // report this error to the console in any case
                    hpx::report_error(boost::current_exception());
                }
                catch (...) {
                    LTM_(error)
                        << "Unhandled exception while executing "
                        << Derived::get_action_name(lva);

                    // report this error to the console in any case
                    hpx::report_error(boost::current_exception());
                }

                // Verify that there are no more registered locks for this
                // OS-thread. This will throw if there are still any locks
                // held.
                util::force_error_on_lock();
                return threads::terminated;
            }
        };

    public:
        // This static construct_thread_function allows to construct
        // a proper thread function for a thread without having to
        // instantiate the base_action type. This is used by the applier in
        // case no continuation has been supplied.
        template <typename ...Ts>
        static threads::thread_function_type
        construct_thread_function(naming::address::address_type lva,
            Ts&&... vs)
        {
            return traits::action_decorate_function<Derived>::call(lva,
                util::bind(util::one_shot(typename Derived::thread_function()),
                    lva, std::forward<Ts>(vs)...));
        }

        // This static construct_thread_function allows to construct
        // a proper thread function for a thread without having to
        // instantiate the base_action type. This is used by the applier in
        // case a continuation has been supplied
        template <typename ...Ts>
        static threads::thread_function_type
        construct_thread_function(continuation_type& cont,
            naming::address::address_type lva, Ts&&... vs)
        {
            return traits::action_decorate_function<Derived>::call(lva,
                detail::construct_continuation_thread_function<Derived>(
                    cont, lva, util::deferred_call(invoker(), lva,
                        std::forward<Ts>(vs)...)));
        }

        // direct execution
        template <typename ...Ts>
        static BOOST_FORCEINLINE result_type
        execute_function(naming::address::address_type lva, Ts&&... vs)
        {
            if (LHPX_ENABLED(debug))
            {
                LTM_(debug)
                    << "basic_action::execute_function"
                    << Derived::get_action_name(lva);
            }

            return invoker()(lva, std::forward<Ts>(vs)...);
        }

        ///////////////////////////////////////////////////////////////////////
        typedef typename traits::is_future<local_result_type>::type is_future_pred;

        template <typename LocalResult>
        struct sync_invoke
        {
            template <typename ...Ts>
            BOOST_FORCEINLINE static LocalResult call(
                boost::mpl::false_, BOOST_SCOPED_ENUM(launch) policy,
                naming::id_type const& id, error_code& ec, Ts&&... vs)
            {
                return hpx::async<basic_action>(policy, id,
                    std::forward<Ts>(vs)...).get(ec);
            }

            template <typename ...Ts>
            BOOST_FORCEINLINE static LocalResult call(
                boost::mpl::true_, BOOST_SCOPED_ENUM(launch) policy,
                naming::id_type const& id, error_code& /*ec*/, Ts&&... vs)
            {
                return hpx::async<basic_action>(policy, id,
                    std::forward<Ts>(vs)...);
            }
        };

        template <typename ...Ts>
        BOOST_FORCEINLINE local_result_type operator()(
            BOOST_SCOPED_ENUM(launch) policy, naming::id_type const& id,
            error_code& ec, Ts&&... vs) const
        {
            return util::void_guard<local_result_type>(),
                sync_invoke<local_result_type>::call(
                    is_future_pred(), policy, id, ec, std::forward<Ts>(vs)...);
        }

        template <typename ...Ts>
        BOOST_FORCEINLINE local_result_type operator()(
            naming::id_type const& id, error_code& ec, Ts&&... vs) const
        {
            return (*this)(launch::all, id, ec, std::forward<Ts>(vs)...);
        }

        template <typename ...Ts>
        BOOST_FORCEINLINE local_result_type operator()(
            BOOST_SCOPED_ENUM(launch) policy, naming::id_type const& id,
            Ts&&... vs) const
        {
            return (*this)(launch::all, id, throws, std::forward<Ts>(vs)...);
        }

        template <typename ...Ts>
        BOOST_FORCEINLINE local_result_type operator()(
            naming::id_type const& id, Ts&&... vs) const
        {
            return (*this)(launch::all, id, throws, std::forward<Ts>(vs)...);
        }

        /// retrieve component type
        static int get_component_type()
        {
            return static_cast<int>(components::get_component_type<Component>());
        }

        /// The function \a get_action_type returns whether this action needs
        /// to be executed in a new thread or directly.
        static base_action::action_type get_action_type()
        {
            return base_action::plain_action;
        }

    private:
        // serialization support
        friend class boost::serialization::access;

        template <typename Archive>
        BOOST_FORCEINLINE void serialize(Archive& ar, const unsigned int) {}
    };

    ///////////////////////////////////////////////////////////////////////////
    namespace detail
    {
        // simple type allowing to distinguish whether an action is the most
        // derived one
        struct this_type {};

        template <typename Action, typename Derived>
        struct action_type
          : boost::mpl::if_<boost::is_same<Derived, this_type>, Action, Derived>
        {};
    }

    ///////////////////////////////////////////////////////////////////////////
    template <typename Signature, typename TF, TF F, typename Derived>
    class basic_action_impl;

    ///////////////////////////////////////////////////////////////////////////
    template <typename TF, TF F, typename Derived = detail::this_type>
    struct action
      : basic_action_impl<TF, TF, F,
            typename detail::action_type<
                action<TF, F, Derived>,
                Derived
            >::type>
    {
        typedef typename detail::action_type<
            action, Derived
        >::type derived_type;

        typedef boost::mpl::false_ direct_execution;
    };

    ///////////////////////////////////////////////////////////////////////////
    template <typename TF, TF F, typename Derived = detail::this_type>
    struct direct_action
      : basic_action_impl<TF, TF, F,
            typename detail::action_type<
                direct_action<TF, F, Derived>,
                Derived
            >::type>
    {
        typedef typename detail::action_type<
            direct_action, Derived
        >::type derived_type;

        typedef boost::mpl::true_ direct_execution;

        /// The function \a get_action_type returns whether this action needs
        /// to be executed in a new thread or directly.
        static base_action::action_type get_action_type()
        {
            return base_action::direct_action;
        }
    };

    ///////////////////////////////////////////////////////////////////////////
    // Base template allowing to generate a concrete action type from a function
    // pointer. It is instantiated only if the supplied pointer is not a
    // supported function pointer.
    template <typename TF, TF F, typename Derived = detail::this_type,
        typename Direct = boost::mpl::false_>
    struct make_action;

    template <typename TF, TF F, typename Derived>
    struct make_action<TF, F, Derived, boost::mpl::false_>
      : action<TF, F, Derived>
    {
        typedef action<TF, F, Derived> type;
    };

    template <typename TF, TF F, typename Derived>
    struct make_action<TF, F, Derived, boost::mpl::true_>
      : direct_action<TF, F, Derived>
    {
        typedef direct_action<TF, F, Derived> type;
    };

    template <typename TF, TF F, typename Derived = detail::this_type>
    struct make_direct_action
      : make_action<TF, F, Derived, boost::mpl::true_>
    {};

    // Macros usable to refer to an action given the function to expose
    #define HPX_MAKE_ACTION(func)                                             \
        hpx::actions::make_action<decltype(&func), &func>        /**/         \
    /**/
    #define HPX_MAKE_DIRECT_ACTION(func)                                      \
        hpx::actions::make_direct_action<decltype(&func), &func> /**/         \
    /**/

    /// \endcond
}}

/// \cond NOINTERNAL

// Disabling the guid initialization stuff for actions
namespace hpx { namespace traits
{
    /// \cond NOINTERNAL
    template <typename Action>
    struct needs_guid_initialization<
            hpx::actions::transfer_action<Action>,
            util::always_void<typename Action::needs_guid_serialization> >
      : Action::needs_guid_serialization
    {};
    /// \endcond
}}

#include <hpx/config/warnings_suffix.hpp>

///////////////////////////////////////////////////////////////////////////////
#define HPX_REGISTER_BASE_HELPER(action, actionname)                          \
    hpx::actions::detail::register_base_helper<action>                        \
            BOOST_PP_CAT(                                                     \
                BOOST_PP_CAT(__hpx_action_register_base_helper_, __LINE__),   \
                _##actionname);                                               \
/**/

///////////////////////////////////////////////////////////////////////////////
// Helper macro for action serialization, each of the defined actions needs to
// be registered with the serialization library
#define HPX_DEFINE_GET_ACTION_NAME(action)                                    \
    HPX_DEFINE_GET_ACTION_NAME_(action, action)                               \
/**/
#define HPX_DEFINE_GET_ACTION_NAME_(action, actionname)                       \
    namespace hpx { namespace actions { namespace detail {                    \
        template<> HPX_ALWAYS_EXPORT                                          \
        char const* get_action_name<action>()                                 \
        {                                                                     \
            return BOOST_PP_STRINGIZE(actionname);                            \
        }                                                                     \
    }}}                                                                       \
/**/

#define HPX_ACTION_REGISTER_ACTION_FACTORY(Action, Name)                      \
    static ::hpx::actions::detail::action_registration<Action>                \
        const BOOST_PP_CAT(Name, _action_factory_registration) =              \
        ::hpx::actions::detail::action_registration<Action>();                \
/**/

#define HPX_REGISTER_ACTION_(...)                                             \
    HPX_UTIL_EXPAND_(BOOST_PP_CAT(                                            \
        HPX_REGISTER_ACTION_, HPX_UTIL_PP_NARG(__VA_ARGS__)                   \
    )(__VA_ARGS__))                                                           \
/**/
#define HPX_REGISTER_ACTION_1(action)                                         \
    HPX_REGISTER_ACTION_2(action, action)                                     \
/**/
#define HPX_REGISTER_ACTION_2(action, actionname)                             \
    HPX_ACTION_REGISTER_ACTION_FACTORY(hpx::actions::transfer_action<action>, \
        actionname)                                                           \
    HPX_DEFINE_GET_ACTION_NAME_(action, actionname)                           \
/**/

///////////////////////////////////////////////////////////////////////////////
#define HPX_REGISTER_ACTION_DECLARATION_NO_DEFAULT_GUID1(action)              \
    namespace hpx { namespace actions { namespace detail {                    \
        template <> HPX_ALWAYS_EXPORT                                         \
        char const* get_action_name<action>();                                \
    }}}                                                                       \
/**/
#define HPX_REGISTER_ACTION_DECLARATION_NO_DEFAULT_GUID2(action)              \
    namespace hpx { namespace traits {                                        \
        template <>                                                           \
        struct needs_automatic_registration<action>                           \
          : boost::mpl::false_                                                \
        {};                                                                   \
    }}                                                                        \
/**/

#define HPX_REGISTER_ACTION_DECLARATION_(...)                                 \
    HPX_UTIL_EXPAND_(BOOST_PP_CAT(                                            \
        HPX_REGISTER_ACTION_DECLARATION_, HPX_UTIL_PP_NARG(__VA_ARGS__)       \
    )(__VA_ARGS__))                                                           \
/**/
#define HPX_REGISTER_ACTION_DECLARATION_1(action)                             \
    HPX_REGISTER_ACTION_DECLARATION_2(action, action)                         \
/**/
#define HPX_REGISTER_ACTION_DECLARATION_2(action, actionname)                 \
    HPX_REGISTER_ACTION_DECLARATION_NO_DEFAULT_GUID1(action)                  \
    HPX_REGISTER_ACTION_DECLARATION_NO_DEFAULT_GUID2(                         \
        hpx::actions::transfer_action<action>)                                \
/**/

namespace hpx { namespace actions
{
    template <typename Action>
    struct init_registration<transfer_action<Action> >
    {
        static detail::automatic_action_registration<transfer_action<Action> > g;
    };

    template <typename Action>
    detail::automatic_action_registration<transfer_action<Action> >
        init_registration<transfer_action<Action> >::g =
            detail::automatic_action_registration<transfer_action<Action> >();
}}

///////////////////////////////////////////////////////////////////////////////
#define HPX_ACTION_USES_STACK(action, size)                                   \
    namespace hpx { namespace traits                                          \
    {                                                                         \
        template <>                                                           \
        struct action_stacksize<action>                                       \
        {                                                                     \
            enum { value = size };                                            \
        };                                                                    \
    }}                                                                        \
/**/

#define HPX_ACTION_USES_SMALL_STACK(action)                                   \
    HPX_ACTION_USES_STACK(action, threads::thread_stacksize_small)            \
/**/
#define HPX_ACTION_USES_MEDIUM_STACK(action)                                  \
    HPX_ACTION_USES_STACK(action, threads::thread_stacksize_medium)           \
/**/
#define HPX_ACTION_USES_LARGE_STACK(action)                                   \
    HPX_ACTION_USES_STACK(action, threads::thread_stacksize_large)            \
/**/
#define HPX_ACTION_USES_HUGE_STACK(action)                                    \
    HPX_ACTION_USES_STACK(action, threads::thread_stacksize_huge)             \
/**/
#define HPX_ACTION_DOES_NOT_SUSPEND(action)                                   \
    HPX_ACTION_USES_STACK(action, threads::thread_stacksize_nostack)          \
/**/

///////////////////////////////////////////////////////////////////////////////
#define HPX_ACTION_HAS_PRIORITY(action, priority)                             \
    namespace hpx { namespace traits                                          \
    {                                                                         \
        template <>                                                           \
        struct action_priority<action>                                        \
        {                                                                     \
            enum { value = priority };                                        \
        };                                                                    \
    }}                                                                        \
/**/

#define HPX_ACTION_HAS_LOW_PRIORITY(action)                                   \
    HPX_ACTION_HAS_PRIORITY(action, threads::thread_priority_low)             \
/**/
#define HPX_ACTION_HAS_NORMAL_PRIORITY(action)                                \
    HPX_ACTION_HAS_PRIORITY(action, threads::thread_priority_normal)          \
/**/
#define HPX_ACTION_HAS_CRITICAL_PRIORITY(action)                              \
    HPX_ACTION_HAS_PRIORITY(action, threads::thread_priority_critical)        \
/**/

/// \endcond

/// \def HPX_REGISTER_ACTION_DECLARATION(action)
///
/// \brief Declare the necessary component action boilerplate code.
///
/// The macro \a HPX_REGISTER_ACTION_DECLARATION can be used to declare all the
/// boilerplate code which is required for proper functioning of component
/// actions in the context of HPX.
///
/// The parameter \a action is the type of the action to declare the
/// boilerplate for.
///
/// This macro can be invoked with an optional second parameter. This parameter
/// specifies a unique name of the action to be used for serialization purposes.
/// The second parameter has to be specified if the first parameter is not
/// usable as a plain (non-qualified) C++ identifier, i.e. the first parameter
/// contains special characters which cannot be part of a C++ identifier, such
/// as '<', '>', or ':'.
///
/// \par Example:
///
/// \code
///      namespace app
///      {
///          // Define a simple component exposing one action 'print_greating'
///          class HPX_COMPONENT_EXPORT server
///            : public hpx::components::simple_component_base<server>
///          {
///              void print_greating ()
///              {
///                  hpx::cout << "Hey, how are you?\n" << hpx::flush;
///              }
///
///              // Component actions need to be declared, this also defines the
///              // type 'print_greating_action' representing the action.
///              HPX_DEFINE_COMPONENT_ACTION(server, print_greating, print_greating_action);
///          };
///      }
///
///      // Declare boilerplate code required for each of the component actions.
///      HPX_REGISTER_ACTION_DECLARATION(app::server::print_greating_action);
/// \endcode
///
/// \note This macro has to be used once for each of the component actions
/// defined using one of the \a HPX_DEFINE_COMPONENT_ACTION macros. It has to
/// be visible in all translation units using the action, thus it is
/// recommended to place it into the header file defining the component.
#define HPX_REGISTER_ACTION_DECLARATION(...)                                  \
    HPX_REGISTER_ACTION_DECLARATION_(__VA_ARGS__)                             \
/**/

/// \def HPX_REGISTER_ACTION_DECLARATION_TEMPLATE(template, action)
///
/// \brief Declare the necessary component action boilerplate code for actions
///        taking template type arguments.
///
/// The macro \a HPX_REGISTER_ACTION_DECLARATION_TEMPLATE can be used to
/// declare all the boilerplate code which is required for proper functioning
/// of component actions in the context of HPX, if those actions take template
/// type arguments.
///
/// The parameter \a template specifies the list of template type declarations
/// for the action type. This argument has to be wrapped into an additional
/// pair of parenthesis.
///
/// The parameter \a action is the type of the action to declare the
/// boilerplate for. This argument has to be wrapped into an additional pair
/// of parenthesis.
///
/// \par Example:
///
/// \code
///      namespace app
///      {
///          // Define a simple component exposing one action 'print_greating'
///          class HPX_COMPONENT_EXPORT server
///            : public hpx::components::simple_component_base<server>
///          {
///              template <typename T>
///              void print_greating (T t)
///              {
///                  hpx::cout << "Hey " << t << ", how are you?\n" << hpx::flush;
///              }
///
///              // Component actions need to be declared, this also defines the
///              // type 'print_greating_action' representing the action.
///
///              // Actions with template arguments (like print_greating<>()
///              // above) require special type definitions. The simplest way
///              // to define such an action type is by deriving from the HPX
///              // facility make_action:
///              template <typename T>
///              struct print_greating_action
///                : hpx::actions::make_action<
///                      void (server::*)(T), &server::template print_greating<T>,
///                      print_greating_action<T> >
///              {};
///          };
///      }
///
///      // Declare boilerplate code required for each of the component actions.
///      HPX_REGISTER_ACTION_DECLARATION_TEMPLATE((template T), (app::server::print_greating_action<T>));
/// \endcode
///
/// \note This macro has to be used once for each of the component actions
/// defined as above. It has to be visible in all translation units using the
/// action, thus it is recommended to place it into the header file defining the
/// component.
#define HPX_REGISTER_ACTION_DECLARATION_TEMPLATE(TEMPLATE, TYPE)              \
    HPX_SERIALIZATION_REGISTER_TEMPLATE_ACTION(TEMPLATE, TYPE)                \
/**/

/// \def HPX_REGISTER_ACTION(action)
///
/// \brief Define the necessary component action boilerplate code.
///
/// The macro \a HPX_REGISTER_ACTION can be used to define all the
/// boilerplate code which is required for proper functioning of component
/// actions in the context of HPX.
///
/// The parameter \a action is the type of the action to define the
/// boilerplate for.
///
/// This macro can be invoked with an optional second parameter. This parameter
/// specifies a unique name of the action to be used for serialization purposes.
/// The second parameter has to be specified if the first parameter is not
/// usable as a plain (non-qualified) C++ identifier, i.e. the first parameter
/// contains special characters which cannot be part of a C++ identifier, such
/// as '<', '>', or ':'.
///
/// \note This macro has to be used once for each of the component actions
/// defined using one of the \a HPX_DEFINE_COMPONENT_ACTION macros. It has to
/// occur exactly once for each of the actions, thus it is recommended to
/// place it into the source file defining the component. There is no need
/// to use this macro for actions which have template type arguments (see
/// \a HPX_REGISTER_ACTION_DECLARATION_TEMPLATE)
#define HPX_REGISTER_ACTION(...)                                              \
    HPX_REGISTER_ACTION_(__VA_ARGS__)                                         \
/**/

#endif

