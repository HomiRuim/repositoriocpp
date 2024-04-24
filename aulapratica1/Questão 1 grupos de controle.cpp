#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long entrada;
    cin >> entrada;
    if (entrada % 2 == 0){
        while (entrada % 2 == 0) {
            entrada = entrada / 2;
        }
        cout << entrada;
    }
    else {
        cout << entrada;
    }
}