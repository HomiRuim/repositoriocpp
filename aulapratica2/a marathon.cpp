#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, count;
    int a,b,c,d;
    vector<vector<int>>particip;
    cin >> n;
    count = 0;
    while (count < n) {
        cin >> a >> b >> c >> d;
        particip.push_back({a,b,c,d});
        count++;
    }
    for (int i = 0; i < particip.size(); i++) {
        int contador = 0;
        for (int j = 1; j < particip[i].size(); j++) {
            if (particip[i][0] < particip[i][j]){
                contador++;
            }
        }
        cout << contador << endl;
    }
    return 0;
}