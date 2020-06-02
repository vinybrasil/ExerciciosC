#include <bits/stdc++.h>
using namespace std;

#define LIN 10
#define COL 10

int main(){
	
	int x;
	int y;
	int tabela[LIN][COL];  //10 linhas e 10 colunas
	
	//preenche a tabela
	
	for (y=0; y < LIN; y+=1)
		for (x=0; x < COL; x+=1)
			tabela[y][x] = y*x;
	
	//imprime o numero de colunas
	
	cout << setw(6) << 0;
	for (x=1; x < COL; x+=1)
		cout << setw(3) << x;    //setw coloca espaços
	cout << endl;
	
	//Imprime a linha horizontal
	
	cout << "  ";
	
	for (x=0; x<3*COL; x+=1)
		cout << "-";
	cout << endl;
	
	//Imprime as linhas da tabela
	//cada linha é precedida pelo indice de linha e barra vertical
	
	for (y=0; y < LIN; y += 1){
		cout << setw(2) << y << "|";
		for (x=0; x < COL; x+= 1)
			cout << setw(3) << tabela[y][x];
		cout << endl;
	}
}
