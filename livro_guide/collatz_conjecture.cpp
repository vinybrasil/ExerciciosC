#include <bits/stdc++.h>

using namespace std;

long long arrumar(long long *n){ //pode ser int se os valores forem pequenos
	//cout << *n << endl; usa esse se quiser o valor da variavel
	if (*n % 2 == 0){
		*n = *n/2;
	}
	else *n = *n * 3 + 1;
}

int main(){

	long long n;
	cin >> n;
	cout << n << endl;
	//arrumar(&n);
	while (n != 1){
		arrumar(&n);
		cout << n << endl ; //uma hora ele cai num múltiplo de 2 e converge para o 1
	}
	
	
	 

	return 0;
}
