// Copyright (c) 2005-2014 Hartmut Kaiser
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_PLUGIN_CONFIG_HPP_HK_2005_11_07)
#define HPX_PLUGIN_CONFIG_HPP_HK_2005_11_07

#include <hpx/config.hpp>
#include <boost/config.hpp>

///////////////////////////////////////////////////////////////////////////////
#if !defined(HPX_PLUGIN_NO_EXPORT_API)

# if defined(BOOST_WINDOWS)

#   define HPX_PLUGIN_EXPORT_API      __declspec(dllexport)
#   define HPX_PLUGIN_API             __cdecl

# else // BOOST_WINDOWS

#   if defined(HPX_HAVE_PLUGIN_GCC_HIDDEN_VISIBILITY)
#     define HPX_PLUGIN_EXPORT_API    __attribute__((visibility ("default")))
#   endif

#   if defined(__GNUC__) && defined(__i386)
#     define HPX_PLUGIN_API           __attribute__((cdecl))
#   endif

#endif // BOOST_WINDOWS

#endif // !HPX_PLUGIN_NO_EXPORT_API

# if !defined(HPX_PLUGIN_EXPORT_API)
#   define HPX_PLUGIN_EXPORT_API      /* empty */
# endif
# if !defined(HPX_PLUGIN_API)
#   define HPX_PLUGIN_API             /* empty */
# endif

///////////////////////////////////////////////////////////////////////////////
//
//  The HPX_PLUGIN_ARGUMENT_LIMIT defines the upper limit of possible arguments
//  to the virtual constructors.
//
///////////////////////////////////////////////////////////////////////////////
#if !defined(HPX_PLUGIN_ARGUMENT_LIMIT)
#define HPX_PLUGIN_ARGUMENT_LIMIT 10
#endif

///////////////////////////////////////////////////////////////////////////////
//
//  The HPX_PLUGIN_SYMBOLS_PREFIX defines the prefix to use for all exported names
//  generated by this library.
//
///////////////////////////////////////////////////////////////////////////////
#if !defined(HPX_PLUGIN_SYMBOLS_PREFIX)
# if defined(HPX_DEBUG)
#   define HPX_PLUGIN_SYMBOLS_PREFIX_DYNAMIC hpxd
#   define HPX_PLUGIN_SYMBOLS_PREFIX         hpxd
# else
#   define HPX_PLUGIN_SYMBOLS_PREFIX_DYNAMIC hpx
#   define HPX_PLUGIN_SYMBOLS_PREFIX         hpx
# endif
#endif

#define HPX_PLUGIN_SYMBOLS_PREFIX_DYNAMIC_STR                                 \
    BOOST_PP_STRINGIZE(HPX_PLUGIN_SYMBOLS_PREFIX_DYNAMIC)                     \
/**/

#define HPX_PLUGIN_SYMBOLS_PREFIX_STR                                         \
    BOOST_PP_STRINGIZE(HPX_PLUGIN_SYMBOLS_PREFIX)                             \
/**/

#endif // HPX_PLUGIN_CONFIG_HPP_HK_2005_11_07
