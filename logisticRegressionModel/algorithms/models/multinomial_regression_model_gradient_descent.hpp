//  Copyright (c) 2017 Zahra Khatami 
//
// Train your data, then record them in an output file stated in "retrieving_weights_multi_classes_into_text_file"

#include <limits>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <Eigen/Eigen>
#include <Eigen/LU>

using namespace Eigen;

#define MAX_FLOAT (std::numeric_limits<float>::max())
#define MIN_FLOAT (std::numeric_limits<float>::min())

class multinomial_logistic_regression_model {

	MatrixXf weightsm; 							//weights of our learning network : F * K
	MatrixXf outputsm;							//outputs of the training data : N * K
	MatrixXf gradient;							//gradient of E : F * K
	
        void initialize_weigths(std::size_t number_of_experiments,std::size_t number_of_features,std::size_t number_of_classes,float initial_values);
	
	void computing_all_output(MatrixXf X,MatrixXf& Y);
	void computing_all_gradient(MatrixXf X,MatrixXf Y);
	void updating_values_of_weigths_multi_class(float eta);
	
	void printing_weights_multi_class();
	
public:
	multinomial_logistic_regression_model() {
	
		weightsm = MatrixXf::Random(10,10);
		gradient = MatrixXf::Random(10,10);
		outputsm = MatrixXf::Random(10,10);


	}

	void convert_target_to_binary(int* targets, MatrixXf& Binary);	
	void convert_binary_to_target(MatrixXf Binary,int* targets);
	void fit(MatrixXf X,MatrixXf Y,MatrixXf execution_times,float eta,float threshold,float time_treshold,int Max_ite,bool print);
        void predict(MatrixXf X,MatrixXf Y,int* predictions);
	float computing_new_least_squared_err_multi_class(MatrixXf execution_times,int* predictions,int* real,float time_threshold);	
	//void retrieving_weights_multi_classes_into_text_file();
	void misclassification_ratio(int* predictions, int* real,int number_of_classes,int number_of_experiments);
        void Total_times(int number_of_classes,int number_of_experiments,int* predictions,MatrixXf execution_times);
};

void multinomial_logistic_regression_model::initialize_weigths(std::size_t number_of_experiments,std::size_t number_of_features, std::size_t number_of_classes,float initial_values){
    weightsm=MatrixXf::Random(number_of_classes,number_of_features);
    gradient=MatrixXf::Random(number_of_classes,number_of_features);
    outputsm=MatrixXf::Random(number_of_experiments,number_of_classes);

    //initializing weights
    for(std::size_t f = 0; f < number_of_classes; f++) {
	for(std::size_t k = 0; k < number_of_features; k++) {
	    weightsm(f, k) = initial_values;
	}
    }
}


void multinomial_logistic_regression_model::convert_target_to_binary(int* target, MatrixXf& Binary) {
	for(std::size_t n = 0; n < Binary.rows(); n++) {
		for(std::size_t k = 0; k < Binary.cols(); k++) {
			if(target[n] == k) {
				Binary(n, k) = 1.0;
			}
			else {
				Binary(n, k) = 0.0;
			}
		}
	}
}


void multinomial_logistic_regression_model::convert_binary_to_target(MatrixXf Binary,int* target) {	
	for(std::size_t n = 0; n < Binary.rows(); n++) {
		float prob = MIN_FLOAT;
		for(std::size_t k = 0; k < Binary.cols(); k++) {
			if(prob < Binary(n, k)) {
				target[n] = k;
				prob =Binary(n, k);
			}
		}
	}
}

//computing outputs
void multinomial_logistic_regression_model::computing_all_output(MatrixXf X,MatrixXf& Y) {
	MatrixXf sum_w_experimental_results = MatrixXf::Zero(X.rows(),1);
	
	//w^T * X
	MatrixXf W_X = MatrixXf::Random(Y.cols(), X.rows());
	W_X = weightsm * X.transpose();
	//sigma(exp(wQ))
	for(std::size_t n = 0; n < X.rows(); n++) {
		for(std::size_t k = 0; k < Y.cols(); k++) {
			sum_w_experimental_results(n, 0) += exp(W_X(k, n));
		}
	}
	
	//normalisation
	for(std::size_t n = 0; n < X.rows(); n++) {
		for(std::size_t k = 0; k < Y.cols(); k++) {		
			Y(n,k) = float(exp(W_X(k, n))/sum_w_experimental_results(n, 0)); 
		}
	}
}

//computing gradient 
void multinomial_logistic_regression_model::computing_all_gradient(MatrixXf X,MatrixXf Y){
	//initializing
	gradient *= 0.0;
//	std::cout<<outputsm<<std::endl;
	MatrixXf Substraction=(outputsm-Y);
	gradient=Substraction.transpose()*X;
//	std::cout<<Substraction<<std::endl;
}


//computing leas squares err
float multinomial_logistic_regression_model::computing_new_least_squared_err_multi_class(MatrixXf execution_times,int* predictions,int* real,float time_threshold) {	
	std::size_t num_err = 0;
	for(std::size_t n = 0; n < execution_times.rows(); n++) {
		if(abs(execution_times(n, predictions[n]) - execution_times(n, real[n])) > time_threshold) {
			num_err++;
		}		
	}
	float prec = float(num_err) / execution_times.rows();
	return prec;
}

//updating weights
void multinomial_logistic_regression_model::updating_values_of_weigths_multi_class(float eta) {	
	weightsm= weightsm- eta*gradient;
}

void multinomial_logistic_regression_model::printing_weights_multi_class() {
	std::cout<<weightsm<<std::endl;
	std::cout<<"\n --------------------\n";
}


//updating weights till error meets the defined threshold
void multinomial_logistic_regression_model::fit(MatrixXf X,MatrixXf Y,MatrixXf execution_times,float eta,float threshold,float time_treshold,int Max_ite,bool print) {
	float least_squared_err = MAX_FLOAT;
	std::size_t itr = 1;
	int* predictions=new int[X.rows()];
	int* real=new int[X.rows()];
	convert_binary_to_target(Y,real);
        //initializing weights,gradients,outputsm
        initialize_weigths(X.rows(),X.cols(),Y.cols(),0.1);

	computing_all_output(X,outputsm);
       // computing_all_output(X,outputsm);
	while(threshold < least_squared_err && itr<Max_ite) {
		computing_all_gradient(X,Y);								
		updating_values_of_weigths_multi_class(eta);
		computing_all_output(X,outputsm);
		convert_binary_to_target(outputsm,predictions);
		least_squared_err = computing_new_least_squared_err_multi_class(execution_times,predictions,real,time_treshold);
   	        if(print){
		    std::cout<<"("<<itr<<")"<<"Least_squared_err =\t" << least_squared_err<<std::endl;		
		    printing_weights_multi_class();
		}		
		itr++;
	}
	if(print){std::cout<<"("<<itr<<") => "<<"Least_squared_err =\t" << least_squared_err<<std::endl;}
	misclassification_ratio(predictions,real,Y.cols(),X.rows());
	Total_times(Y.cols(),X.rows(),predictions,execution_times);
	delete[] predictions;
	delete[] real;
}
void multinomial_logistic_regression_model::predict(MatrixXf X,MatrixXf Y,int* predictions){
    //forward propogation
    computing_all_output(X,Y);
    convert_binary_to_target(Y,predictions);
}

/*
//retrieving information into the external file, which is going to be used at runtime
void multinomial_logistic_regression_model::retrieving_weights_multi_classes_into_text_file() {	
  
  // for learning model on chunk_size training data
	std::ofstream outputFile("inputs/data_chunk.dat");
  
  // for learning model on prefetching distance training data:
  //std::ofstream outputFile("inputs/data_prefetch.dat");

	//normalization parameters (variance and average) in the first line
	for(std::size_t p = 0; p < number_of_features - 1; p++) {
		outputFile << var[p] << " " << averages[p] << " "; 
	}
	outputFile << var[number_of_features - 1] << " " << averages[number_of_features - 1] << std::endl;

	for(std::size_t c = 0; c < number_of_classes; c++) {
		for(std::size_t f = 0; f < number_of_features - 1; f++) {
			outputFile << weightsm(f, c) << " ";
		}
		outputFile << weightsm(number_of_features - 1, c);
		if(c != number_of_classes - 1) {
			outputFile << std::endl;
		}
	}
}
*/

void multinomial_logistic_regression_model::misclassification_ratio(int* predictions, int* real,int number_of_classes,int number_of_experiments){
	std::size_t num_err = 0;
	MatrixXi confusion_matrix=MatrixXi::Zero(number_of_classes,number_of_classes);
	for(std::size_t n = 0; n < number_of_experiments; n++) {		
	    confusion_matrix(predictions[n],real[n])+=1;
	    if(predictions[n] != real[n]){
	        num_err+=1;
	    }
	}
        std::cout<<confusion_matrix<<std::endl;
	std::cout<<"\n number of misclassifications predicted is\t"<<num_err<<" out of "<<number_of_experiments<<std::endl;
}

void multinomial_logistic_regression_model::Total_times(int number_of_classes,int number_of_experiments,int* predictions,MatrixXf execution_times){
    double optimal_time=0;
    double actual_time=0;
    double min_t;
    std::vector<double> times_candidates(number_of_classes,0);
    for(std::size_t n=0;n<number_of_experiments;n++){
        actual_time+=execution_times(n,predictions[n]);
	min_t=execution_times(n,0);
	for(std::size_t c=0;c<number_of_classes;c++){
	    times_candidates[c]+=execution_times(n,c);
	    if(execution_times(n,c)<min_t){
	        min_t=execution_times(n,c);
	    }
	}
	optimal_time+=min_t;

    }
    std::cout<<"The total is :"<<actual_time<<std::endl;
    std::cout<<"The optimal time is "<<optimal_time<<std::endl;
    for(std::size_t c=0;c<number_of_classes;c++){
        std::cout<<"The time for candidate "<<c<<" is "<<times_candidates[c]<<std::endl;
    }
}

