#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
	char nome[] = {'v', 'i', 'n', 'y', '\0'}; //ultimo caracter é null(false0, enquanto os outros são true
	cout << nome << endl;
	
	int i = 0;
	while(nome[i]) //enquanto os char sao true; (while(nome[i]) != \0)
	{
		cout << nome[i];
		i++;
	};
	
	
	//ou...
	
	int k = 0;
	
	char name[] = "viny";
	
	while (name[k])
		cout << name[k++];
		
	//ou...
	
	int j = 0;
	
	do{
		cout <<name[j];
	}while(name[j++]); //testa a condoção no fim do loop: vai rodar uma vez
	
	
	char sobrenome[] = "brasil";
	//isupper, tolower, toupper, strcmp sao outras funcoes da to string
	cout << strcat(name,sobrenome);
	
	return 0;
}
