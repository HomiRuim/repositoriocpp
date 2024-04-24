#include<bits/stdc++.h>

int main(){

    long long int i, j;
    scanf("%lld %lld", &i, &j);
    if( (i*j)%2 == 0){
        printf("%lld",((i*j)/2));
    }else{
        printf("%lld",((i*j)/2)+1);
    }
    return 0;
}