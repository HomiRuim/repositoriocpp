#include<bits/stdc++.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    int soma = n+m;
    int x = (100*n)/soma;
    int y = (100*m)/soma;

    printf("%d %d", x, y);
}