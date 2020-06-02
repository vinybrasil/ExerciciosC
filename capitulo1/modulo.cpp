#include <bits/stdc++.h>
using namespace std;

int main(){
	//se usar int não usa long long
	//long long b = 123123123132123LL; 64bit
	long long x = 1;
	for (int i = 2; i <= n; i++){
		x = (x*i)%m;
	}
	cout << x%m << "\n";
}
