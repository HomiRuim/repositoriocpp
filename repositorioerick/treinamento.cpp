#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll int n,cont,aux;
    cont = 0;
    cin >> n;
    vector<ll int> v(n);
    for(ll int i = 0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(ll int i = 0; i<n; i++){
        if (cont == v.size() or i+1 > v[v.size() -1]){
            break;
        }
        if(i+1 <= v[cont]){
            aux += 1;
            cont += 1;
        }else{
            auto it = find(v.begin(),v.end(),i+1);
            if(it != v.end()){
                cont = it - v.begin();
                aux += 1;
            }else{
                auto upper = upper_bound(v.begin(),v.end(),i+1);
                cont = upper - v.begin() + 1;
                aux += 1;
            }
        }
    }
    cout << aux;
    return 0;
}