#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, aux;
    vector<int> v;
    cin >> n;
    for (int i = 0 ; i<n; i++){
        cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(), v.end()); // Ordenação crescente
    cin >> m;
    for (int i = 0; i<m; i++){
        cin >> aux;
        auto it = upper_bound(v.begin(), v.end(), aux);
        cout << it - v.begin() <<"\n";
    }

    return 0;
}