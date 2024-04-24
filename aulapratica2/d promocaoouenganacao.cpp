#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if ((b/a)*c > d){
        cout << "Promocao";
    }
    else {
        cout << "Enganacao";
    }
    return 0;
}