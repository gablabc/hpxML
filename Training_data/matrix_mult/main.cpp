//  Copyright (c) 2017 Zahra Khatami 
//  Copyright (c) 2016 David Pfander
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#include <stdlib.h>
#include<ctime>
#include <vector>
#include<fstream>
#include <hpx/hpx_init.hpp>
#include <hpx/parallel/algorithms/for_each.hpp>
#include <hpx/util/high_resolution_timer.hpp>
#include <boost/range/irange.hpp>
#include <vector>
#include <initializer_list>
#include <algorithm>
#include <typeinfo>
#include <iterator>
#include <hpx/parallel/executors/dynamic_chunk_size.hpp>
#include "algorithms/1_loop_level.h"
#include<string>

int hpx_main(int argc, char* argv[])
{
    // Initialization
    int iterations=strtol(argv[2],NULL,10);
    std::vector<double> chunk_candidates(7);
    chunk_candidates[0]=0.001;chunk_candidates[1]=0.005;chunk_candidates[2]=0.01;chunk_candidates[3]=0.05;chunk_candidates[4]=0.1;
    chunk_candidates[5]=0.2;chunk_candidates[6]=0.5;
    
    srand(time(NULL));
    std::ofstream file("./files/train_data_matrix_debug.txt",std::ios::app);
    if(file){
        if(std::strncmp(argv[1],"Rand_Pond_Sum",13)==0){     
		Rand_Pond_Sum(iterations,chunk_candidates,file); 
		std::cout<<"Rans_Sum"<<std::endl;
        }
       
        else if(std::strncmp(argv[1],"Swap",4)==0){
		Swap(iterations,chunk_candidates,file);    
		std::cout<<"Swap"<<std::endl;
	}
        else if(std::strncmp(argv[1],"Finite_Diff_Step",16)==0){
		Finite_Diff_Step(iterations,chunk_candidates,file);    
		std::cout<<"Finite_diff"<<std::endl;
	}
        else if(std::strncmp(argv[1],"Stream",6)==0){
		Stream(iterations,chunk_candidates,file);    
		std::cout<<"Stream"<<std::endl;
	}

    }
    else{
        std::cout<<"The file could not open"<<std::endl;
    }
    return hpx::finalize();
}

int main(int argc, char* argv[])
{
    return hpx::init(argc, argv);
}