#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	string line;
	//ofstream : out
	//ifstream : in 
	//fstream : in/out
	
	ifstream myfile ("input.txt");
	if (myfile.is_open()){
		while (getline (myfile, line)){
			cout << line << "\n";
		}
		myfile.close();
		
	}
	else cout << "não deu pra abrir o arquivo";
	
}
