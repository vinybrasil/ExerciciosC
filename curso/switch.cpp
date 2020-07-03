#include <iostream>

using namespace std;

int main(){
	
	int num = 7;
	
	switch(num){ //da pra usar char tb
		case 9:
			cout << "numero 9";
			break;
		case 10: // o 10 tem que ser constante
			cout << "numero 10";
			break;
		default: //opcional
			cout << "pau no seu cu";
	}
	
	char comando = 'q';
	
	switch(comando){ //da pra usar char tb
		case 'q':
			cout << "quit";
			break;
		case 'i': // o 10 tem que ser constante
			cout << "insert mode";
			break;
		default: //opcional
			cout << "digita, seu merda";
	}
	return 0;
}
