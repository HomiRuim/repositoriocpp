#include<bits/stdc++.h>
using namespace std;
#include <vector>

int main(){
    long int n,m;
    scanf("%ld %ld",&n,&m);
    vector<long int> v;
    for(int x = 0; x < n; x++){
        long int y;
        scanf(" %ld",&y);
        v.push_back(y);
    }
    long int cont = 0;
    long int cont2 =0;
    for (int z: v){
        if (z==3){
            cont += 1;
        }else{
            cont2 += z;
        }
    }
    while (cont <= n and (cont +1)*3 <=m and cont2 >=3){
        cont2 = cont2 -3;
        cont +=1;
    }
    while (cont*3 > m){
        cont = cont -1;
    }
    printf("%ld", cont);
    return 0;
}