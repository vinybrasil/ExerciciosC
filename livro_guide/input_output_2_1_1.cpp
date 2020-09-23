#include <bits/stdc++.h>

using namespace std;

int main(){

	//normalmente, os dados vem separados por espaços, entao o cin é bom
	
	int a, b, c, d;
	string x;
		
	cin >> a >> b >> x;
	
	//o scanf tambem funciona mais rapido mas é mais dificil
	
	scanf("%d %d", &c, &d);
	
	//otimizar io
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//o cout é bom pra printar
	
	cout << a << " " << b << " " << x << "\n"; // \n é melhor que endl
	
	//printf tbm funfa
	
	printf("%d %d\n", a, b);
	
	//lendo a linha inteira
	
	string s;
	getline(cin, s);
	
	//um loop quando nao se sabe a qnt de dados 
	
	while (cin >> x){
			
	}
	
	//lendo de arquivos
	
	freopen("input.txt", "r", stdin);
	
	//escrevendo neles
	
	freopen("output.txt", "w", stdout);
	
	 
	

	return 0;
}

