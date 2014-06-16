//  Copyright (c) 2014 Hartmut Kaiser
//  Copyright (c) 2014 Patricia Grubel
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef HPX_STENCIL_PRINT_TIME_HPP
#define HPX_STENCIL_PRINT_TIME_HPP

#include <hpx/hpx_init.hpp>
#include <hpx/hpx.hpp>

#include <hpx/include/iostreams.hpp>

#include <stdexcept>


void print_time_results(
    boost::uint64_t num_os_threads
  , boost::uint64_t elapsed
  , boost::uint64_t nx
  , boost::uint64_t np
  , boost::uint64_t nt
  , bool header
    )
{
    if (header)
<<<<<<< HEAD
        std::cout << "OS_Threads,Execution_Time_sec,"
                "Points_per_Partition,Partitions,Time_Steps\n"
=======
        std::cout << "OS-threads, Execution-Time(seconds),"
                " Points/Partition, Partitions, Time-Steps\n"
>>>>>>> master
             << hpx::flush;

    std::string const threads_str = boost::str(boost::format("%lu,") % num_os_threads);
    std::string const nx_str = boost::str(boost::format("%lu,") % nx);
    std::string const np_str = boost::str(boost::format("%lu,") % np);
    std::string const nt_str = boost::str(boost::format("%lu ") % nt);

    std::cout << ( boost::format("%-21s %.14g, %-21s %-21s %-21s\n")
            % threads_str % (elapsed / 1e9) %nx_str % np_str
            % nt_str) << hpx::flush;
}

void print_time_results(
    boost::uint64_t num_os_threads
  , boost::uint64_t elapsed
  , boost::uint64_t nx
  , boost::uint64_t nt
  , bool header
    )
{
    if (header)
<<<<<<< HEAD
        std::cout << "OS_Threads,Execution_Time_sec,"
                "Grid_Points,Time_Steps\n"
=======
        std::cout << "OS-threads, Execution-Time(seconds),"
                " Grid-Points, Time-Steps\n"
>>>>>>> master
             << hpx::flush;

    std::string const threads_str = boost::str(boost::format("%lu,") % num_os_threads);
    std::string const nx_str = boost::str(boost::format("%lu,") % nx);
    std::string const nt_str = boost::str(boost::format("%lu ") % nt);

    std::cout << ( boost::format("%-21s %10.12s, %-21s %-21s\n")
            % threads_str % (elapsed / 1e9) %nx_str % nt_str) << hpx::flush;
}
#endif
