#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    char nome[26];
    vector<string> v;
    vector<string> w;
    map<string,int> mapa;
    for (int x=0; x<n; x++){
       scanf("\n%s", &nome);
       v.push_back(nome);
    }
    w = v;
    sort(v.begin(),v.end());
    int cont = 0;
    for(string x : v){
        mapa[x] = cont;
        cont += 1;
    }
    for (string x : w){
        printf("%d ", mapa[x]);
    }
}