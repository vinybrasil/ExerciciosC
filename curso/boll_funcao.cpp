#include <iostream>

using namespace std;

bool par(int num){ //diferencia as funções nao pelo nome, mas pelos argumentos
	if(num % 2 == 0)
		return true;
	else //pode ser omitido
		return false;
}
void mensagem(){
	cout<<"pau no seu cu"<<endl;
	cout<<"faz algo de bom dessa bosta de vida e digita um numero"<<endl;
	
}
int main(){
	int num;
	mensagem();
	cin >> num;
	
	bool c = par(num);
	if (c)
		cout << "par";
	else
		cout << "impar";
}
