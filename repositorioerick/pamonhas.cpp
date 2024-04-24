#include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <algorithm> 

int main(){
    int x,y,z;
    vector<int> v;
    scanf("%d %d %d", &x, &y, &z);
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(), v.end());
    int a = v[v.size() - 1];    //Maior valor
    int b = v[v.size() - 2];    //Medio valor
    int c = v[0];               //Menor valor
    int n = __gcd(a,b);
    printf("%d",__gcd(c,n));
}