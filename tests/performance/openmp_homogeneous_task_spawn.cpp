//  Copyright (c) 2011-2012 Bryce Adelstein-Lelbach
//  Copyright (c) 2007-2012 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// Copyright (c) 2007, Sandia Corporation
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the Sandia Corporation nor the names of its
//       contributors may be used to endorse or promote products derived from
//       this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY SANDIA CORPORATION ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL SANDIA CORPORATION BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
// OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <hpx/util/high_resolution_timer.hpp>

#include <omp.h>

#include <stdexcept>
#include <iostream>

#include <boost/assert.hpp>
#include <boost/format.hpp>
#include <boost/program_options.hpp>

using boost::program_options::variables_map;
using boost::program_options::options_description;
using boost::program_options::value;
using boost::program_options::store;
using boost::program_options::command_line_parser;
using boost::program_options::notify;

using hpx::util::high_resolution_timer;

///////////////////////////////////////////////////////////////////////////////
// Command-line variables.
boost::uint64_t tasks = 500000;
boost::uint64_t delay = 0;
boost::uint64_t current_trial = 0;
boost::uint64_t total_trials = 1; 

///////////////////////////////////////////////////////////////////////////////
void print_results(
    int cores
  , double walltime
    )
{
    if (current_trial == 0)
    {
        std::string const cores_str = boost::str(boost::format("%lu,") % cores);
        std::string const tasks_str = boost::str(boost::format("%lu,") % tasks);
        std::string const delay_str = boost::str(boost::format("%lu,") % delay);

        std::cout << ( boost::format("%-21s %-21s %-21s %10.10s")
                     % cores_str % tasks_str % delay_str % walltime);
    }

    else
        std::cout << (boost::format(", %10.10s") % walltime);

    if ((total_trials ? (total_trials - 1) : 0) <= current_trial)
        std::cout << "\n";
}

///////////////////////////////////////////////////////////////////////////////
void worker()
{
    double volatile d = 0.;
    for (double i = 0; i < delay; ++i)
        d += 1. / (2. * i + 1.);
}

///////////////////////////////////////////////////////////////////////////////
int omp_main(
    variables_map&
    )
{
    // Validate command line.
    if (0 == tasks)
        throw std::invalid_argument("count of 0 tasks specified\n");

    // Start the clock.
    high_resolution_timer t;

    #pragma omp parallel
    #pragma omp single
    {
        for (boost::uint64_t i = 0; i < tasks; ++i)
            #pragma omp task untied
            worker();

        // Yield until all work is done.
        #pragma omp taskwait

        print_results(omp_get_num_threads(), t.elapsed());
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
int main(
    int argc
  , char** argv
    )
{
    // Parse command line.
    variables_map vm;

    options_description cmdline("Usage: " HPX_APPLICATION_STRING " [options]");

    cmdline.add_options()
        ( "help,h"
        , "print out program usage (this message)")
        
        ( "threads,t"
        , value<int>()->default_value(1),
         "number of OS-threads to use")

        ( "tasks"
        , value<boost::uint64_t>(&tasks)->default_value(500000)
        , "number of tasks to invoke")

        ( "delay"
        , value<boost::uint64_t>(&delay)->default_value(0)
        , "number of iterations in the delay loop")

        ( "current-trial"
        , value<boost::uint64_t>(&current_trial)->default_value(0)
        , "current trial")

        ( "total-trials"
        , value<boost::uint64_t>(&total_trials)->default_value(1)
        , "total number of trial runs")
        ;
    ;

    store(command_line_parser(argc, argv).options(cmdline).run(), vm);

    notify(vm);

    // Print help screen.
    if (vm.count("help"))
    {
        std::cout << cmdline;
        return 0;
    }

    // Setup the OMP environment.
    omp_set_num_threads(vm["threads"].as<int>());

    return omp_main(vm);
}

