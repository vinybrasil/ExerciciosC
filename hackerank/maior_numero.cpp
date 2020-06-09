#include <bits/stdc++.h>

using namespace std;

int max_of_four(int a, int b, int c, int d){
    int tempA;
    int tempB;
    
    if (a > b)
    	tempA = a;
	else
		tempA = b;
		
	if (c > d)
		tempB = c;
	else
		tempB = d;
	
	if (tempB > tempA)
		return tempB;
	else 
		return tempA;
}

int main() {
    int a =3, b = 4, c = 6, d = 5;
    //scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
