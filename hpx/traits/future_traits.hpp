//  Copyright (c) 2007-2016 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_TRAITS_FUTURE_TRAITS_APR_29_2014_0925AM)
#define HPX_TRAITS_FUTURE_TRAITS_APR_29_2014_0925AM

namespace hpx { namespace lcos
{
    template <typename R> class future;
    template <typename R> class shared_future;
}}

namespace hpx { namespace traits
{
    ///////////////////////////////////////////////////////////////////////////
    namespace detail
    {
        template <typename Future, typename Enable = void>
        struct future_traits_customization_point
        {};
    }

    template <typename T>
    struct future_traits
      : detail::future_traits_customization_point<T>
    {};

    template <typename Future>
    struct future_traits<Future const>
      : future_traits<Future>
    {};

    template <typename Future>
    struct future_traits<Future&>
      : future_traits<Future>
    {};

    template <typename Future>
    struct future_traits<Future const &>
      : future_traits<Future>
    {};

    template <typename R>
    struct future_traits<lcos::future<R> >
    {
        typedef R type;
        typedef R result_type;
    };

    template <typename R>
    struct future_traits<lcos::shared_future<R> >
    {
        typedef R type;
        typedef R const& result_type;
    };

    template <>
    struct future_traits<lcos::shared_future<void> >
    {
        typedef void type;
        typedef void result_type;
    };
}}

#endif

