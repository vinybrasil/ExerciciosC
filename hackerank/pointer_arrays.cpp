#include <bits/stdc++.h>

using namespace std;

int main(){
	int v[] = {1,2,3,4};
	cout << sizeof(v)<<endl; //16
	cout << sizeof(v)/sizeof(v[0]) << endl; //4
	
	int* p1 = v;
	int* p2 = &v[0];
	int* p3 = &v[4]; //(aponta para o nada)
	
	cout << p1 << endl; //0x6ffdf0
	cout << p2 << endl; //0x6ffdf0 (nome dos meus trigemios)
	cout << p3 << endl; //0x6ffe00 (slot vazio)
	
}
