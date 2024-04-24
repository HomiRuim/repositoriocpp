#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,cont,aux;
    string str;
    n = 0;
    a = 0;
    b = 0;
    cont =0;
    aux = 0;
    str = "";
    scanf("%d %d %d",&n, &a, &b);
    for (int x = 1; x<=n; x++){
        str = to_string(x);
        for(char c: str){
           aux += c - '0';
        }
        if( aux >= a and aux <= b){
            cont += stoi(str);
        }
        aux = 0;
    }
    printf("%d", cont);
    return 0;
}