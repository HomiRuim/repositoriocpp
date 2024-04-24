#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    vector<pair<int,int>>vetor;
    pair<int,int>par;
    while (n--){
        cin >> i >> j;
        vetor.push_back({i,j});
        int aux = 0;
        for (int z = 0; z < vetor.size(); z++) { /*2 4 5 8 9*/
            bool checkpar = false;
            bool checkimp = false;
            if (checkimp == false) {
                aux += vetor[z].first;
                checkimp = true;
                checkpar = false;
            }
            else {
                aux += vetor[z].second;
                checkpar = true;
                checkimp = false;
            }
        }
        cout << aux;
    }
}