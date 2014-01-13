//  Copyright (c) 2013 Agustin Berge
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef HPX_UTIL_ADD_RVALUE_REFERENCE_HPP
#define HPX_UTIL_ADD_RVALUE_REFERENCE_HPP

#include <utility>

namespace hpx { namespace util
{
    template <typename T>
    struct add_rvalue_reference
    {
        typedef T && type;
    };

    template <typename T>
    struct add_rvalue_reference<T&>
    {
        typedef T& type;
    };

    template <typename T>
    struct add_rvalue_reference<T &&>
    {
        typedef T && type;
    };
}}

#endif
