#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, aux;
    set<int> v;
    cin >> n ;
    for (int i = 0 ; i<n; i++){
        cin >> m ;
        for (int j = 0; j<m; j++){
            cin >> aux;
            v.insert(aux);
        }
        cout << m - v.size() << "\n";
        v.clear();
    }
    return 0;
}