#include<bits/stdc++.h>
using namespace std;

int main(){
    int x0,y0,restaurantes,x1,y1, preco, total, aux, cont;
    aux = 1000000000;
    scanf("%d %d %d", &restaurantes, &x0, &y0);
    for( int x = 0; x<restaurantes; x++){
        scanf("%d %d %d", &x1, &y1, &preco);
        total = 2*(abs(x0-x1)+abs(y0-y1))+preco;
        if (total < aux){
            aux = total;
            cont = x + 1;
        }    
    }
    printf("%d %d",aux, cont);
    return 0;
}