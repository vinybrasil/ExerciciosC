#include <bits/stdc++.h>

using namespace std;

int main(){
	int vetor[100];
	
	for (int i = 0; i < 100; i++){
		cout << vetor[i] << endl; //imprime o lixo da memoria
	}
	for (int i = 0; i < 100; i++){
		 vetor[i] = i; //inicializando da forma correta;
		 cout << vetor[i] << endl;
	}
	return 0;
}
