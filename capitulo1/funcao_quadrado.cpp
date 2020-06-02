#include <bits/stdc++.h>
using namespace std;
int quadrado(int n){

	return n * n; }
void salver(void){
	cout << "\nsalve";
}
int main(){
	int numero;
	
	cout << "Numero: ";
	cin >> numero;
	cout << "O quadrado de " << numero << " eh " << quadrado(numero);
	
	char salve[30];
	
	cout << "\nEscolha alguem pra mandar salve: ";
	cin >> salve;
	cout << "Salve " << salve;
	salver();
}
