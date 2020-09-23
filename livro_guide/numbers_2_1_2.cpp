#include <bits/stdc++.h>

using namespace std;

int main(){

	//se multiplicar int com int e chamar de long long dá um resultado errado
	
	int a = 123;
	long long d = 123123123123123123LL; //tem o LL no final
	
	//dá pra dar a resposta em modulo
	
	//fatorial de n modulo m;
	
	int n = 1205;
	int m = 43;
	
	long long x = 1;
	
	for (int i = 1; i <= n; i++){
		x = (x*i)%m;
		cout << x;
	}
	cout << x << "\n";
	
	//float 
	
	double q = 0.3*3+0.1; //da pra usar o long double se precisar
	
	printf("%.9f\n", x); //9 casas decimais de precisao
	
	if (abs(a-b) < 1e-9){ //se a diferença absoluta entre dois numeros for menor que 1*e^-9, sao iguais
		
	}
	
	
	return 0;
}

