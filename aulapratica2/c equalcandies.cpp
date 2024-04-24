#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>numeros;
    vector<vector<int>>numerosmaior;
    int count0 = 0;
    while (count0 < n) {
        int n1;
        cin >> n1;
        for (int i = 0; i < n1; i++){
            int a;
            cin >> a;
            numeros.push_back(a);
        }
        numerosmaior.push_back(numeros);
        numeros.clear();
        count0++;
    }
    for (int i = 0; i < numerosmaior.size(); i++){
        int valor = 0;
        for (int z = 0; z < numerosmaior[i].size(); z++){
            sort(numerosmaior[i].begin(),numerosmaior[i].end());
            int a = numerosmaior[i][z];
            valor += a;
        }
        int v1 = numerosmaior[i].size();
        int v2 = *min_element(numerosmaior[i].begin(), numerosmaior[i].end());
        int calculo = valor - (v1 * v2);
        cout << calculo << endl;
    }
    return 0;
}