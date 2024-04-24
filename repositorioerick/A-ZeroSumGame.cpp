#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cont;
    scanf(" %d",&n);
    m = 0;
    cont = 0;
    for (int x =0; x<n-1; x++){
        scanf("%d",&m);
        cont += m*(-1);
    }
    printf("%d",cont);
    return 0;
}