#include <bits/stdc++.h>

using namespace std;

int main(){
	
	//ponteiro: variavel que tem o ender�o de outra variavel no pc
	
	int var = 10;
	int* pvar;
	
	pvar = &var; //pvar �  o ende�o de var
	
	cout << pvar << endl;	//da o endereco (fodase ne)
	cout << *pvar << endl; //acessa o conteudo do endereco
	
	*pvar = 20;
	
	cout << *pvar << endl;
	
	return 0;
}
