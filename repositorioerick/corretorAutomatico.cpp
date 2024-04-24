#include<bits/stdc++.h>
using namespace std;

int main(){
    float n, cont;
    float m;
    char c, d;
    scanf("%f",&n);
    for (int i =0; i<n; i++){
        scanf(" %c %c", &c, &d);
        if(c == d)
            cont += 1;
    }
    m = 10*cont/n;
    printf("Nota: %.02f",m);
    return 0;
}