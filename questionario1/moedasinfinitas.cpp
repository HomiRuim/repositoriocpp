#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long int A = 0, N = 0, soma = 0;
    cin >> N;
    cin >> A;
    if (A > N){
        cout << "Sim";
    }
    else{
        soma = 0;
        do {
            soma += 500;
            if (N-soma < 500){
                break;
            }
        }
        while (N != soma && soma < N);
        if (N-soma <= A){
            cout << "Sim";
        }
        else{
            cout << "Nao";
        }
    }
    return 0;
}