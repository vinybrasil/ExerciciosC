#include <iostream>
#include "my_math.h" //criar para cada .cpp que vai colocar no projeto

using namespace std;

int w = 3; //variavel global, acess�vel de qualquer fun��o

int main(int argc, char** argv) {
	int n = 5; // vari�vel local, acess�vel dessa fun��o
	
	cout << "Fatorial de " << n << " eh " << fatorial(n) << endl;
	cout << "Quadrado de " << w << " eh " << area_quadrado(w) << endl;
	return 0;
}
