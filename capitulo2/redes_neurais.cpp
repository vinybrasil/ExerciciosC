#include <bits/stdc++.h>
#include <armadillo>
#include <math.h>

using namespace std;
using namespace arma;

float sigmoid(float x){
	return 1/(1+ exp(-x));
}

float derivative_sigmoid(float x){
	return x * (1 - x);
}

int main(){
	/*mat A(4,5, fill::randu); //4 linhas, 5 colunas, filled with random values
	mat B(4,5, fill::randu);
	
	cout << A << endl;
	cout << B << endl;*/
	
	double features_treino[][3] = {{0,0,1},{1,1,1},{1,0,1},{0,1,1}};
	
	//cout << features_treino[3];
	
	double labels_treino[] = {0,1,1,0};
	
	mat A = {{0,0,1},{1,1,1},{1,0,1},{0,1,1}};
	mat B = randu(3,1);
	mat C = A * B;
	
	cout << C;
	
	
	
	
}
