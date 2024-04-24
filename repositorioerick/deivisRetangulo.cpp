#include <bits/stdc++.h>
using namespace std;
bool compareSecond(const pair<int,int>&a, const pair<int,int>&b){
    return a.second < b.second;
}
bool compareFirst(const pair<int,int>&a, const pair<int,int>&b){
    return a.first < b.first;
}
int main() {
    int i, j;
    scanf("%d %d", &i, &j);
    char str[201];
    pair<int,int> par;
    vector<pair<int,int>> posicoes;
    int cont = 1;
    int cont0 = 1;
    for (int x = 0; x < i; x++) {
        scanf("%s", str);                       // Não é necessário & em strings
        for (char c: str){
            if (c =='1'){
                par = make_pair(cont0,cont);    //Maior x e maior y
                posicoes.push_back(par);
            }
            cont += 1;
        }
        cont = 1;
        cont0 +=1;
    }
    if (posicoes.size() == 0){
        printf("0x0");
    }else{

        sort(posicoes.begin(),posicoes.end(),compareSecond);
        printf("%dx", posicoes[posicoes.size()-1].second - posicoes[0].second+1);
        sort(posicoes.begin(),posicoes.end(),compareFirst);
        printf("%d", posicoes[posicoes.size()-1].first - posicoes[0].first +1);
    }
    return 0;
}
