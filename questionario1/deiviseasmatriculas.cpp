#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n, count = 0;
    string nome;
    vector<string>pessoas;
    vector<string>pessoasalf;
    vector<int>lista;
    cin >> n;
    while (count < n) {
        cin >> nome;
        pessoas.push_back(nome);
        count++;
    }
    pessoasalf = pessoas;
    sort(pessoasalf.begin(),pessoasalf.end());
    int tampessoasalf = pessoasalf.size();
    int tampessoas = pessoas.size();
    for (int i = 0; i < tampessoas; i++){
        for (int j = 0; j < tampessoasalf; j++){
            if (pessoas[i] == pessoasalf[j]){
                cout << j << " ";
            }
        }
    }
    return 0;
}