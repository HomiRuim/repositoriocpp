#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n, m, aux, aux2, aux3;
    int cont = 0;
    cin >> n;
    for ( int i = 0; i<n; i++){
        cin >> m;
        for ( int j = 0; j<m; j++){
            cin >> aux;
            cont += aux;
            v.push_back(aux);
        }
        sort(v.begin(),v.end());
        aux2 = v[0]*m;
        aux3 = cont - aux2;
        cout << aux3 << "\n";
        aux3 = 0;
        aux2 = 0;
        cont = 0;
        v.clear();
    }
}