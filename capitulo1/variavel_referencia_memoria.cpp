#include <bits/stdc++.h>

using namespace std;

void troca(int & px,int & py){ //passa o endere�o (referencia) delas na mem�ria
	int temp;
	
	temp = px;
	px = py;
	py = temp;
	
	//RETURN S� RETORNA UM VALOR
}

int main(){
	int a, b;
	
	cout << "Entre dois numeros: ";
	cin >> a >> b;
	
	cout << "Voce entrou com " << a << " e " << b << endl;
	
	troca(a,b);
	
	cout << "Trocados, eles sao " << a << " e " << b << endl;
	
	
	
}
