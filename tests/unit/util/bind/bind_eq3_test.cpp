#include <hpx/hpx_main.hpp>
#include <hpx/config.hpp>

#if defined(BOOST_MSVC)
#pragma warning(disable: 4786)  // identifier truncated in debug info
#pragma warning(disable: 4710)  // function not inlined
#pragma warning(disable: 4711)  // function selected for automatic inline expansion
#pragma warning(disable: 4514)  // unreferenced inline removed
#endif

//  Taken from the Boost.Bind library
//
//  bind_eq3_test.cpp - function_equal with bind and weak_ptr
//
//  Copyright (c) 2004, 2005, 2009 Peter Dimov
//  Copyright (c) 2013 Agustin Berge
//
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//

#include <hpx/util/bind.hpp>
#include <boost/function_equal.hpp>
#include <boost/weak_ptr.hpp>
#include <hpx/util/lightweight_test.hpp>

namespace placeholders = hpx::util::placeholders;

int f( boost::weak_ptr<void> wp )
{
    return wp.use_count();
}

template< class F > void test_self_equal( F f )
{
#ifdef BOOST_NO_ARGUMENT_DEPENDENT_LOOKUP
    using hpx::function_equal;
#endif

    HPX_TEST( function_equal( f, f ) );
}

int main()
{
    test_self_equal( hpx::util::bind( f, placeholders::_1 ) );
    test_self_equal( hpx::util::bind( f, boost::weak_ptr<void>() ) );

    return hpx::util::report_errors();
}
