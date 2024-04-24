#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll int n, a, resto;
    scanf("%lld %lld", &n, &a);
    resto = n % 500;
    if ( a >= resto){
        printf("SIM");
    }else{
        printf("NAO");
    }
}