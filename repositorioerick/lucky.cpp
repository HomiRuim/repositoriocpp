#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m0,m1,m2,m3,m4,m5;
    string num;
    cin >> n;
    for ( int i = 0; i < n; i++){
        cin >> num;
        m0 = int(num[0]-'0');
        m1 = int(num[1]-'0');
        m2 = int(num[2]-'0');
        m3 = int(num[3]-'0');
        m4 = int(num[4]-'0');
        m5 = int(num[5]-'0');
        if(m0 + m1 + m2 == m3 + m4 + m5)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}