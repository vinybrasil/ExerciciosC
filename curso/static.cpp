#include <bits/stdc++.h>

using namespace std;

void loop(){
	//util para ver quantas vezes o programa foi chamado
	static int d = 1; //nao reseta a variavel quando chamo a fun��o
	cout << d << endl;  
	d++; //s� muda aqui
	
}

int main(){
	loop();
	loop();
	loop();
	loop();
}
