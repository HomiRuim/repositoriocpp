#include<bits/stdc++.h>
using namespace std;

int main(){
    bool teste = true;
    string str;
    map<char,int> mapa;
    map<int,int> mapa1;
    cin >> str;
    for (char c: str){
        mapa[c] += 1;
    }
    for(auto &p: mapa){
        cout << p.first;
        cout << "-";
        cout << p.second;
        cout << "\n";
    }

    for(auto& p : mapa){
        mapa1[p.second] += 1;
    }
    cout << "================================\n";
    for(auto &p: mapa1){
        cout << p.first;
        cout << "-";
        cout << p.second;
        cout << "\n";
    }

    for (auto & p: mapa1){
        if(p.second == 0 or p.second == 2){
            continue;
        }else{
            teste = false;
        }
    }
    if(teste){
        cout<< "Yes";
    }else{
        cout<< "No";
    }
    return 0;
}