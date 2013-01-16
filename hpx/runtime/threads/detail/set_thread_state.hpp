//  Copyright (c) 2007-2013 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_RUNTIME_THREADS_DETAIL_SET_THREAD_STATE_JAN_13_2013_0518PM)
#define HPX_RUNTIME_THREADS_DETAIL_SET_THREAD_STATE_JAN_13_2013_0518PM

#include <hpx/hpx_fwd.hpp>
#include <hpx/exception.hpp>
#include <hpx/runtime/threads/thread_data.hpp>
#include <hpx/runtime/threads/thread_helpers.hpp>
#include <hpx/runtime/threads/detail/create_work.hpp>
#include <hpx/runtime/threads/detail/create_thread.hpp>
#include <hpx/util/logging.hpp>
#include <hpx/util/io_service_pool.hpp>

#include <boost/asio/deadline_timer.hpp>

namespace hpx { namespace threads { namespace detail
{
    ///////////////////////////////////////////////////////////////////////////
    template <typename SchedulingPolicy>
    thread_state set_thread_state(SchedulingPolicy& scheduler,
        thread_id_type id, thread_state_enum new_state,
        thread_state_ex_enum new_state_ex, thread_priority priority,
        std::size_t thread_num = std::size_t(-1), error_code& ec = throws);

    ///////////////////////////////////////////////////////////////////////////
    template <typename SchedulingPolicy>
    thread_state_enum set_active_state(SchedulingPolicy& scheduler,
        thread_id_type id, thread_state_enum newstate,
        thread_state_ex_enum newstate_ex, thread_priority priority,
        thread_state previous_state)
    {
        if (HPX_UNLIKELY(!id)) {
            HPX_THROW_EXCEPTION(null_thread_id,
                "threads::detail::set_active_state",
                "NULL thread id encountered");
            return terminated;
        }

        // make sure that the thread has not been suspended and set active again
        // in the mean time
        thread_data* thrd = reinterpret_cast<thread_data*>(id);
        thread_state current_state = thrd->get_state();

        if (thread_state_enum(current_state) == thread_state_enum(previous_state) &&
            current_state != previous_state)
        {
            LTM_(warning)
                << "set_active_state: thread is still active, however "
                      "it was non-active since the original set_state "
                      "request was issued, aborting state change, thread("
                << id << "), description("
                << thrd->get_description() << "), new state("
                << get_thread_state_name(newstate) << ")";
            return terminated;
        }

        // just retry, set_state will create new thread if target is still active
        error_code ec(lightweight);      // do not throw
        set_thread_state(id, newstate, newstate_ex, priority, ec);
        return terminated;
    }

    ///////////////////////////////////////////////////////////////////////////
    template <typename SchedulingPolicy>
    thread_state set_thread_state(SchedulingPolicy& scheduler,
        thread_id_type id, thread_state_enum new_state,
        thread_state_ex_enum new_state_ex, thread_priority priority,
        std::size_t thread_num, error_code& ec)
    {
        if (HPX_UNLIKELY(!id)) {
            HPX_THROWS_IF(ec, null_thread_id, "threads::detail::set_thread_state",
                "NULL thread id encountered");
            return thread_state(unknown);
        }

        // set_state can't be used to force a thread into active state
        if (new_state == threads::active) {
            hpx::util::osstream strm;
            strm << "invalid new state: " << get_thread_state_name(new_state);
            HPX_THROWS_IF(ec, bad_parameter, "threads::detail::set_thread_state",
                hpx::util::osstream_get_string(strm));
            return thread_state(unknown);
        }

        // we know that the id is actually the pointer to the thread
        thread_data* thrd = reinterpret_cast<thread_data*>(id);
        if (!thrd) {
            if (&ec != &throws)
                ec = make_success_code();
            return thread_state(terminated);     // this thread has already been terminated
        }

        thread_state previous_state;
        do {
            // action depends on the current state
            previous_state = thrd->get_state();
            thread_state_enum previous_state_val = previous_state;

            // nothing to do here if the state doesn't change
            if (new_state == previous_state_val) {
                LTM_(warning)
                    << "set_thread_state: old thread state is the same as new "
                       "thread state, aborting state change, thread("
                    << id << "), description("
                    << thrd->get_description() << "), new state("
                    << get_thread_state_name(new_state) << ")";

                if (&ec != &throws)
                    ec = make_success_code();

                return thread_state(new_state);
            }

            // the thread to set the state for is currently running, so we
            // schedule another thread to execute the pending set_state
            if (active == previous_state_val) {
                // schedule a new thread to set the state
                LTM_(warning)
                    << "set_thread_state: thread is currently active, scheduling "
                        "new thread, thread(" << id << "), description("
                    << thrd->get_description() << "), new state("
                    << get_thread_state_name(new_state) << ")";

                thread_init_data data(
                    boost::bind(&set_active_state<SchedulingPolicy>,
                        boost::ref(scheduler), id, new_state, new_state_ex,
                        priority, previous_state),
                    "set state for active thread", 0, priority);

                create_work(scheduler, data, pending, ec);

                if (&ec != &throws)
                    ec = make_success_code();

                return previous_state;     // done
            }
            else if (terminated == previous_state_val) {
                LTM_(warning)
                    << "set_thread_state: thread is terminated, aborting state "
                        "change, thread(" << id << "), description("
                    << thrd->get_description() << "), new state("
                    << get_thread_state_name(new_state) << ")";

                if (&ec != &throws)
                    ec = make_success_code();

                // If the thread has been terminated while this set_state was
                // pending nothing has to be done anymore.
                return previous_state;
            }
            else if (pending == previous_state_val && suspended == new_state) {
                // we do not allow explicit resetting of a state to suspended
                // without the thread being executed.
                hpx::util::osstream strm;
                strm << "set_thread_state: invalid new state, can't demote a "
                        "pending thread, "
                     << "thread(" << id << "), description("
                     << thrd->get_description() << "), new state("
                     << get_thread_state_name(new_state) << ")";

                LTM_(fatal) << hpx::util::osstream_get_string(strm);

                HPX_THROWS_IF(ec, bad_parameter,
                    "threads::detail::set_thread_state",
                    hpx::util::osstream_get_string(strm));
                return thread_state(unknown);
            }

            // If the previous state was pending we are supposed to remove the
            // thread from the queue. But in order to avoid linearly looking
            // through the queue we defer this to the thread function, which
            // at some point will ignore this thread by simply skipping it
            // (if it's not pending anymore).

            LTM_(info) << "set_thread_state: thread(" << id << "), "
                          "description(" << thrd->get_description() << "), "
                          "new state(" << get_thread_state_name(new_state) << "), "
                          "old state(" << get_thread_state_name(previous_state_val)
                       << ")";

            // So all what we do here is to set the new state.
            if (thrd->restore_state(new_state, previous_state)) {
                thrd->set_state_ex(new_state_ex);
                break;
            }

            // state has changed since we fetched it from the thread, retry
            LTM_(error)
                << "set_thread_state: state has been changed since it was fetched, "
                   "retrying, thread(" << id << "), "
                   "description(" << thrd->get_description() << "), "
                   "new state(" << get_thread_state_name(new_state) << "), "
                   "old state(" << get_thread_state_name(previous_state_val)
                << ")";
        } while (true);

        if (new_state == pending) {
            // REVIEW: Passing a specific target thread may interfere with the
            // round robin queuing.
            scheduler.schedule_thread(thrd, thread_num, priority);
            scheduler.do_some_work();
        }

        if (&ec != &throws)
            ec = make_success_code();

        return previous_state;
    }

    ///////////////////////////////////////////////////////////////////////////
    template <typename SchedulingPolicy>
    thread_id_type set_thread_state_timed(SchedulingPolicy& scheduler,
        boost::posix_time::ptime const& expire_at, thread_id_type id,
        thread_state_enum newstate = pending,
        thread_state_ex_enum newstate_ex = wait_timeout,
        thread_priority priority = thread_priority_normal,
        std::size_t thread_num = std::size_t(-1), 
        error_code& ec = throws);

    template <typename SchedulingPolicy>
    thread_id_type set_thread_state_timed(SchedulingPolicy& scheduler,
        boost::posix_time::time_duration const& from_now, thread_id_type id,
        thread_state_enum newstate = pending,
        thread_state_ex_enum newstate_ex = wait_timeout,
        thread_priority priority = thread_priority_normal,
        std::size_t thread_num = std::size_t(-1), 
        error_code& ec = throws);

    ///////////////////////////////////////////////////////////////////////////
    /// This thread function is used by the at_timer thread below to trigger
    /// the required action.
    template <typename SchedulingPolicy>
    thread_state_enum wake_timer_thread(SchedulingPolicy& scheduler,
        thread_id_type id, thread_state_enum newstate,
        thread_state_ex_enum newstate_ex, thread_priority priority,
        thread_id_type timer_id,
        boost::shared_ptr<boost::atomic<bool> > triggered)
    {
        if (HPX_UNLIKELY(!id)) {
            HPX_THROW_EXCEPTION(null_thread_id,
                "threads::detail::wake_timer_thread",
                "NULL thread id encountered (id)");
            return terminated;
        }
        if (HPX_UNLIKELY(!timer_id)) {
            HPX_THROW_EXCEPTION(null_thread_id,
                "threads::detail::wake_timer_thread",
                "NULL thread id encountered (timer_id)");
            return terminated;
        }

        bool oldvalue = false;
        if (triggered->compare_exchange_strong(oldvalue, true)) //-V601
        {
            // timer has not been canceled yet, trigger the requested set_state
            set_thread_state(scheduler, id, newstate, newstate_ex, priority);
        }

        // then re-activate the thread holding the deadline_timer
        // REVIEW: Why do we ignore errors here?
        error_code ec(lightweight);    // do not throw
        set_thread_state(scheduler, timer_id, pending, wait_timeout,
            thread_priority_normal, std::size_t(-1), ec);
        return terminated;
    }

    /// This thread function initiates the required set_state action (on
    /// behalf of one of the threads#detail#set_thread_state functions).
    template <typename SchedulingPolicy, typename TimeType>
    thread_state_enum at_timer(SchedulingPolicy& scheduler,
        TimeType const& expire, thread_id_type id, thread_state_enum newstate,
        thread_state_ex_enum newstate_ex, thread_priority priority)
    {
        if (HPX_UNLIKELY(!id)) {
            HPX_THROW_EXCEPTION(null_thread_id,
                "threads::detail::at_timer",
                "NULL thread id encountered");
            return terminated;
        }

        // create a new thread in suspended state, which will execute the
        // requested set_state when timer fires and will re-awaken this thread,
        // allowing the deadline_timer to go out of scope gracefully
        thread_self& self = get_self();
        thread_id_type self_id = self.get_thread_id();

        boost::shared_ptr<boost::atomic<bool> > triggered(
            boost::make_shared<boost::atomic<bool> >(false));

        thread_init_data data(
            boost::bind(&wake_timer_thread<SchedulingPolicy>,
                boost::ref(scheduler), id, newstate, newstate_ex, priority,
                self_id, triggered),
            "wake_timer", 0, priority);
        thread_id_type wake_id = create_thread(scheduler, data, suspended, true);

        // create timer firing in correspondence with given time
        boost::asio::deadline_timer t (
            get_thread_pool("timer-pool")->get_io_service(), expire);

        // let the timer invoke the set_state on the new (suspended) thread
        t.async_wait(boost::bind(&set_thread_state<SchedulingPolicy>,
            boost::ref(scheduler), wake_id, pending, wait_timeout, priority,
            std::size_t(-1), boost::ref(throws)));

        // this waits for the thread to be reactivated when the timer fired
        // if it returns signaled the timer has been canceled, otherwise
        // the timer fired and the wake_timer_thread above has been executed
        bool oldvalue = false;
        thread_state_ex_enum statex = self.yield(suspended);

        if (wait_timeout != statex &&
            triggered->compare_exchange_strong(oldvalue, true)) //-V601
        {
            // wake_timer_thread has not been executed yet, cancel timer
            t.cancel();
        }

        return terminated;
    }

    /// Set a timer to set the state of the given \a thread to the given
    /// new value after it expired (at the given time)
    template <typename SchedulingPolicy>
    thread_id_type set_thread_state_timed(SchedulingPolicy& scheduler,
        boost::posix_time::ptime const& expire_at, thread_id_type id,
        thread_state_enum newstate, thread_state_ex_enum newstate_ex,
        thread_priority priority, std::size_t thread_num, error_code& ec)
    {
        if (HPX_UNLIKELY(!id)) {
            HPX_THROWS_IF(ec, null_thread_id,
                "threads::detail::set_thread_state",
                "NULL thread id encountered");
            return 0;
        }

        // this creates a new thread which creates the timer and handles the
        // requested actions
        typedef boost::posix_time::ptime time_type;
        thread_init_data data(
            boost::bind(&at_timer<SchedulingPolicy, time_type>,
                boost::ref(scheduler), expire_at, id, newstate, newstate_ex,
                priority),
            "at_timer (expire at)", 0, priority, thread_num);

        return create_thread(scheduler, data, pending, true, ec);
    }

    template <typename SchedulingPolicy>
    thread_id_type set_thread_state_timed(SchedulingPolicy& scheduler,
        boost::posix_time::ptime const& expire_at, thread_id_type id,
        error_code& ec)
    {
        return set_thread_state_timed(scheduler, expire_at, id, pending, 
            wait_timeout, thread_priority_normal, std::size_t(-1), ec);
    }

    /// Set a timer to set the state of the given \a thread to the given
    /// new value after it expired (after the given duration)
    template <typename SchedulingPolicy>
    thread_id_type set_thread_state_timed(SchedulingPolicy& scheduler,
        boost::posix_time::time_duration const& from_now, thread_id_type id,
        thread_state_enum newstate, thread_state_ex_enum newstate_ex,
        thread_priority priority, std::size_t thread_num, error_code& ec)
    {
        if (HPX_UNLIKELY(!id)) {
            HPX_THROWS_IF(ec, null_thread_id,
                "threads::detail::set_thread_state",
                "NULL thread id encountered");
            return 0;
        }

        // this creates a new thread which creates the timer and handles the
        // requested actions
        typedef boost::posix_time::time_duration time_type;
        thread_init_data data(
            boost::bind(&at_timer<SchedulingPolicy, time_type>,
                boost::ref(scheduler), from_now, id, newstate, newstate_ex,
                priority),
            "at_timer (from now)", 0, priority, thread_num);

        return create_thread(scheduler, data, pending, true, ec);
    }

    template <typename SchedulingPolicy>
    thread_id_type set_thread_state_timed(SchedulingPolicy& scheduler,
        boost::posix_time::time_duration const& from_now, thread_id_type id,
        error_code& ec)
    {
        return set_thread_state_timed(scheduler, from_now, id, pending, 
            wait_timeout, thread_priority_normal, std::size_t(-1), ec);
    }
}}}

#endif
