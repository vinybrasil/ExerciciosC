#include <bits/stdc++.h>
using namespace std;

int main(){
	//se tem float, n�o usa == , mas sim ver se a diferen�a � menor que 1e-9
	
	float a = 0.00000000002, b = 0.00000000001;
	if (abs(a-b) < 1e-9){
		printf("os dois s�o iguais");
	
	}
	else {
		printf("os dois n�o s�o iguais");
	}
	
}
