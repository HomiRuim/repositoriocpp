#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int n,g,f,c, aux;
    scanf("%lld %lld %lld %lld", &n, &g, &f, &c);
    if (g > f){
        aux = f + c;
    }else{
        aux = g + c;
    }
    if (aux > n){
        printf("%lld", n);
    }else{
        printf("%lld", aux);
    }
}