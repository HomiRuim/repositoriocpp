#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,n;
    int cont = 0;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> a >> b >> c >> d;
        if(b > a)
            cont += 1;
        if(c > a)
            cont += 1;
        if(d > a)
            cont += 1;
        cout << cont <<"\n";
        cont = 0;
    }
    return 0;
}