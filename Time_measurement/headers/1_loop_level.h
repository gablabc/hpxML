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

double mysecond()
{
    return hpx::util::high_resolution_clock::now() * 1e-9;
}

double random_double(double min,double max){
    return (min+1)+(((double) rand())/(double) RAND_MAX)*(max-(min+1));
}

template<typename T>
void vector_generator(std::vector<T> &A,int size,double min,double max){
    for(std::size_t r = 0; r < size; r++) {
        A.push_back(random_double(min,max));
    }
}

double Mean(std::vector<double> times){
    double mean=0;
    for(int i(0);i<times.size();i++){
        mean+=times[i];
    }
    return mean/times.size();
}

double Var(std::vector<double> times){
    double mean=Mean(times);
    double var=0;
    for(int i(0);i<times.size();i++){
        var+=std::pow(times[i]-mean,2);
    }
    return var/(times.size()-1);
}

void Nothing(int iterations,int chunk_candidate) {
    
    int vector_size=iterations;
    
    auto f=[&](int i){
    };
 

    auto time_range = boost::irange(0, vector_size);
    double t_chunk=0.0;
    double Nrep=10;
    double mean_time;
    double elapsed_time;
    std::vector<double> times(Nrep);
    mean_time=0;
    for(int j(0);j<Nrep+1;j++){
        if(chunk_candidate*vector_size>1){
            t_chunk=mysecond();
            hpx::parallel::for_each(hpx::parallel::execution::par.with(hpx::parallel::dynamic_chunk_size(vector_size*chunk_candidate)), time_range.begin(), time_range.end(), f);
            elapsed_time= mysecond() - t_chunk;
	}
        else{
	    t_chunk=mysecond();
            hpx::parallel::for_each(hpx::parallel::execution::par.with(hpx::parallel::dynamic_chunk_size(1)), time_range.begin(), time_range.end(), f);
            elapsed_time= mysecond() - t_chunk;
	}
	if(j!=0){
	    times[j-1]=elapsed_time;
 	}
    }
    std::cout<<Mean(times)<<","<<Var(times)<<std::endl;
 
}

   

/////////////////////////////////////////////////////////////////////////////////////////////////
void Swap(int iterations,int chunk_candidate) {
    
    int vector_size=iterations;
    std::vector<double> A;
    std::vector<double> B;
    vector_generator(A,vector_size,10,100);
    vector_generator(B,vector_size,10,100);

    
    auto f=[&](int i){
        double container=A[i];
        A[i]=B[i];
        B[i]=container;
    };
 

    auto time_range = boost::irange(0, vector_size);
    double t_chunk=0.0;
    double Nrep=10;
    double mean_time;
    double elapsed_time;
    std::vector<double> times(Nrep);
    mean_time=0;
    for(int j(0);j<Nrep+1;j++){
        if(chunk_candidate*vector_size>1){
            t_chunk=mysecond();
            hpx::parallel::for_each(hpx::parallel::execution::par.with(hpx::parallel::dynamic_chunk_size(vector_size*chunk_candidate)), time_range.begin(), time_range.end(), f);
            elapsed_time= mysecond() - t_chunk;
	}
        else{
	    t_chunk=mysecond();
            hpx::parallel::for_each(hpx::parallel::execution::par.with(hpx::parallel::dynamic_chunk_size(1)), time_range.begin(), time_range.end(), f);
            elapsed_time= mysecond() - t_chunk;
	}
	if(j!=0){
	    times[j-1]=elapsed_time;
 	}
    }
    std::cout<<Mean(times)<<","<<Var(times)<<std::endl;
 
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////// 	
void Stream(int iterations,int chunk_candidate) {
        
    int vector_size=iterations;
    std::vector<double> A;
    std::vector<double> B;
    std::vector<double> C;
    vector_generator(A,vector_size,10,100);
    vector_generator(B,vector_size,10,100);
    vector_generator(C,vector_size,10,100);

    double k(14);
    auto f=[&](int i){
        C[i]=A[i];
	B[i]=k*C[i];
	C[i]=A[i]+B[i];
	A[i]=B[i]+k*C[i];
    };
 

    auto time_range = boost::irange(0, vector_size);
    double t_chunk=0.0;
    double Nrep=10;
    double mean_time;
    double elapsed_time;
    std::vector<double> times(Nrep);
    mean_time=0;
    for(int j(0);j<Nrep+1;j++){
        if(chunk_candidate*vector_size>1){
            t_chunk=mysecond();
            hpx::parallel::for_each(hpx::parallel::execution::par.with(hpx::parallel::dynamic_chunk_size(vector_size*chunk_candidate)), time_range.begin(), time_range.end(), f);
            elapsed_time= mysecond() - t_chunk;
	}
        else{
	    t_chunk=mysecond();
            hpx::parallel::for_each(hpx::parallel::execution::par.with(hpx::parallel::dynamic_chunk_size(1)), time_range.begin(), time_range.end(), f);
            elapsed_time= mysecond() - t_chunk;
	}
	if(j!=0){
	    times[j-1]=elapsed_time;
 	}
    }
    std::cout<<Mean(times)<<","<<Var(times)<<std::endl;
 
}
