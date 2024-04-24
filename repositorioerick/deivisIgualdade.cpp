#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long

int main(){
    int n;
    scanf("%d",&n);
    vector<ll int> v;
    ll int aux;
    for (int x =0; x<n; x++){
        scanf(" %lld", &aux);
        v.push_back(aux);
    }
    sort(v.begin(),v.end());
    ll int cont = 0;
    for( ll int x : v){
        cont += v[v.size() - 1] - x;
    }
    printf("%lld",cont);
}