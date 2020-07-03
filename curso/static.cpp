#include <bits/stdc++.h>

using namespace std;

void loop(){
	//util para ver quantas vezes o programa foi chamado
	static int d = 1; //nao reseta a variavel quando chamo a função
	cout << d << endl;  
	d++; //só muda aqui
	
}

int main(){
	loop();
	loop();
	loop();
	loop();
}
