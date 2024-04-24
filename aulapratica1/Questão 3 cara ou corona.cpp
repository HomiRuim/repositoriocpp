#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    int a,b;
    cin >> a;
    cin >> b;
    float soma = a + b;
    float primeira = a / soma;
    float segunda = b / soma;
    float prim = primeira*100;
    float seg = segunda*100;
    int fin1 = (int)prim;
    int fin2 = (int)seg;
    cout << fin1 << " " <<  fin2;
}