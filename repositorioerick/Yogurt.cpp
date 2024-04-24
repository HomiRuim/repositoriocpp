#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n ;
    for( int i = 0; i<n; i++){
        cin >> a >> b >> c;
        if(a == 1)
            cout<< b << "\n";
        else{
            if (c > b*2)
                cout << a*b << "\n";
            else{
                if (a%2 == 0)
                    cout << a*c/2 << "\n";
                else
                    cout << b + (a-1)*c/2 << "\n";
            }
        }
    }
    return 0;
}