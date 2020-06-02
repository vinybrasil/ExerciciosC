#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	//nao precisa existir o txt anteriormente
	string line;
	ofstream myfile ("output.txt");
	if (myfile.is_open())
	{
		myfile << "Linha1\n";
		myfile << "Linha2";
		myfile.close();
	}
	else cout << "nao deu pra abrir";
}
