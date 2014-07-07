//  Copyright (c) 2011 Bryce Lelbach
//  Copyright (c) 2011-2014 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_4AFE0EEA_49F8_4F4C_8945_7B55BF395DA0)
#define HPX_4AFE0EEA_49F8_4F4C_8945_7B55BF395DA0

#include <hpx/config.hpp>
#include <hpx/hpx_fwd.hpp>
#include <hpx/util/spinlock.hpp>
#include <hpx/components/iostreams/write_functions.hpp>
#include <hpx/runtime/components/server/managed_component_base.hpp>
#include <hpx/runtime/actions/component_action.hpp>

#include <boost/serialization/access.hpp>
#include <boost/serialization/split_member.hpp>

// TODO: Error handling?

namespace hpx { namespace iostreams { namespace detail
{
    struct buffer
    {
    private:
        typedef lcos::local::spinlock mutex_type;

    public:
        buffer()
          : data_(new std::vector<char>)
        {}

        buffer(buffer const& rhs)
          : data_(rhs.data_)
        {}

        buffer(buffer && rhs)
          : data_(rhs.data_)
        {
            rhs.data_.reset();
        }

        bool empty() const
        {
            mutex_type::scoped_lock l(mtx_);
            return !data_.get() || data_->empty();
        }

        buffer init()
        {
            mutex_type::scoped_lock l(mtx_);

            buffer b;
            boost::swap(b.data_, data_);
            return b;
        }

        template <typename Char>
        std::streamsize write(Char const* s, std::streamsize n)
        {
            mutex_type::scoped_lock l(mtx_);
            std::copy(s, s + n, std::back_inserter(*data_));
            return n;
        }

        template <typename Mutex>
        void write(write_function_type const& f, Mutex& mtx)
        {
            typename mutex_type::scoped_lock l(mtx_);
            if (data_.get() && !data_->empty())
            {
                boost::shared_ptr<std::vector<char> > data(data_);
                data_.reset();
                l.unlock();

                typename Mutex::scoped_lock ll(mtx);
                f(*data);
            }
        }

    private:
        boost::shared_ptr<std::vector<char> > data_;

    private:
        friend class boost::serialization::access;

        HPX_COMPONENT_EXPORT void save(
            hpx::util::portable_binary_oarchive& ar, unsigned) const;
        HPX_COMPONENT_EXPORT void load(
            hpx::util::portable_binary_iarchive& ar, unsigned);

        BOOST_SERIALIZATION_SPLIT_MEMBER();

        mutable mutex_type mtx_;
    };
}}}

namespace hpx { namespace iostreams { namespace server
{
    struct HPX_COMPONENT_EXPORT output_stream
      : components::managed_component_base<output_stream>
    {
        // {{{ types
        typedef components::managed_component_base<output_stream> base_type;
        typedef lcos::local::spinlock mutex_type;
        // }}}

    private:
        mutable mutex_type mtx_;
        write_function_type write_f;

        // Executed in an io_pool thread to prevent io from blocking an HPX
        // shepherd thread.
        void call_write_async(detail::buffer in);
        void call_write_sync(detail::buffer in, threads::thread_id_type caller);

    public:
        explicit output_stream(write_function_type write_f_ = write_function_type())
          : write_f(write_f_)
        {}

        // STL OutputIterator
        template <typename Iterator>
        output_stream(Iterator it)
          : write_f(make_iterator_write_function(it))
        {}

        // std::ostream
        output_stream(boost::reference_wrapper<std::ostream> os)
          : write_f(make_std_ostream_write_function(os.get()))
        {}

        void write_async(detail::buffer const& in);
        void write_sync(detail::buffer const& in);

        HPX_DEFINE_COMPONENT_ACTION(output_stream, write_async);
        HPX_DEFINE_COMPONENT_ACTION(output_stream, write_sync);
    };
}}}

HPX_REGISTER_ACTION_DECLARATION(
    hpx::iostreams::server::output_stream::write_async_action
  , output_stream_write_async_action
)

HPX_REGISTER_ACTION_DECLARATION(
    hpx::iostreams::server::output_stream::write_sync_action
  , output_stream_write_sync_action
)

#endif // HPX_4AFE0EEA_49F8_4F4C_8945_7B55BF395DA0

