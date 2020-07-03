#include <bits/stdc++.h>

void update(int *a,int *b, int d) {
    // Complete this function
    *a = *a + *b;
    int c;
    c = d - *b;
    if (c < 0)
        *b = (d - *b)*(-1);
    else
        *b = (d - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb, a); //ele tinha pedido pra nao usar o a aqui, mas nao sei como (TT.TT)
    printf("%d\n%d", a, b);

    return 0;
}
