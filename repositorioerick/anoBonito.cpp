#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    vector<char> letras;
    bool teste = true;
    bool teste1= false;
    scanf("%d",&n);
    while(teste){
        n += 1;
        str = to_string(n);
        for(char c: str){
            auto it = find(letras.begin(), letras.end(),c);
            if (teste1 = it != letras.end()){
                teste = true;
                break;
            }else{
                letras.push_back(c);
                teste = false;
            }
        }
        letras.clear();
    }
    printf("%d",n);
}