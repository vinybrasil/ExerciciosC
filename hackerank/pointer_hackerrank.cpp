#include <bits/stdc++.h>

using namespace std;

void increment(int *v) {
    (*v)++;
}

int main() {
    int a, b;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
