//  Copyright (c) 2011 Bryce Adelstein-Lelbach 
// 
//  Distributed under the Boost Software License, Version 1.0. (See accompanying 
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_init.hpp>
#include <hpx/include/iostreams.hpp>
#include <hpx/util/lightweight_test.hpp>
#include <hpx/runtime/actions/continuation_impl.hpp>
#include <hpx/runtime/agas/interface.hpp>

#include <boost/date_time/posix_time/posix_time.hpp>

#include <tests/correctness/agas/components/simple_refcnt_checker.hpp>
#include <tests/correctness/agas/components/managed_refcnt_checker.hpp>

using boost::program_options::variables_map;
using boost::program_options::options_description;
using boost::program_options::value;

using hpx::init;
using hpx::finalize;
using hpx::find_here;

using boost::posix_time::milliseconds;

using hpx::naming::id_type;
using hpx::naming::get_management_type_name;

using hpx::agas::register_name;
using hpx::agas::unregister_name;

using hpx::test::simple_refcnt_checker;
using hpx::test::managed_refcnt_checker;

using hpx::util::report_errors;

using hpx::cout;
using hpx::flush;

///////////////////////////////////////////////////////////////////////////////
template <
    typename Client
>
void hpx_test_main(
    variables_map& vm
    )
{
    boost::uint64_t const delay = vm["delay"].as<boost::uint64_t>();

    {
        /// AGAS reference-counting test 7 (from #126):
        ///
        ///     Create a component locally, and register a symbolic name for it.
        ///     Then, let all references to the component go out of scope. The
        ///     component should still be alive. Finally, unregister the
        ///     symbolic name. The component should be deleted after the
        ///     symbolic name is unregistered.

        char const name[] = "/tests(refcnt_checker#7)";

        Client monitor(find_here());

        cout << "id: " << monitor.get_gid() << " "
             << get_management_type_name
                    (monitor.get_gid().get_management_type()) << "\n"
             << flush;

        // Associate a symbolic name with the object.
        HPX_TEST_EQ(true, register_name(name, monitor.get_gid()));

        {
            // Detach the reference.
            id_type id = monitor.detach();

            // The component should still be alive.
            HPX_TEST_EQ(false, monitor.ready(milliseconds(delay))); 
        }

        // The component should still be alive, as the symbolic binding holds
        // a reference to it.
        HPX_TEST_EQ(false, monitor.ready(milliseconds(delay))); 

        // Remove the symbolic name. This should return the final credits
        // to AGAS.
        HPX_TEST_EQ(true, unregister_name(name));

        // The component should be destroyed. 
        HPX_TEST_EQ(true, monitor.ready(milliseconds(delay))); 
    }
}

///////////////////////////////////////////////////////////////////////////////
int hpx_main(
    variables_map& vm
    )
{
    {
        cout << std::string(80, '#') << "\n"
             << "simple component test\n" 
             << std::string(80, '#') << "\n" << flush;

        hpx_test_main<simple_refcnt_checker>(vm);

        cout << std::string(80, '#') << "\n"
             << "managed component test\n" 
             << std::string(80, '#') << "\n" << flush;

        hpx_test_main<managed_refcnt_checker>(vm);
    }

    finalize();
    return report_errors();
}

///////////////////////////////////////////////////////////////////////////////
int main(
    int argc
  , char* argv[]
    )
{
    // Configure application-specific options.
    options_description cmdline("usage: " HPX_APPLICATION_STRING " [options]");

    cmdline.add_options()
        ( "delay"
        , value<boost::uint64_t>()->default_value(500)
        , "number of milliseconds to wait for object destruction") 
        ;

    // Initialize and run HPX.
    return init(cmdline, argc, argv);
}

