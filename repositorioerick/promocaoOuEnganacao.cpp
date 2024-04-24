#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    
    if(b/a*c > d)
        cout << "Promocao";
    else
        cout << "Enganacao";
    return 0;
}