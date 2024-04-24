#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long int n = 0, count = 0, num = 0, maxdinh = 0, somacont = 0;
    vector<long long int> pessoas;
    cin >> n;
    while (count < n) {
        count++;
        cin >> num;
        pessoas.push_back(num);
    }
    maxdinh = *max_element(pessoas.begin(),pessoas.end());
    long long int tamvetor = pessoas.size();
    for (long long i = 0; i <tamvetor; i++){
        if (pessoas[i] < maxdinh){
            somacont += maxdinh - pessoas[i];
        }
    }
    cout << somacont;
    return 0;
}