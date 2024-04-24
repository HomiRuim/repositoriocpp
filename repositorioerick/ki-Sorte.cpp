#include <bits/stdc++.h>
#include <math.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    

    long long int a;
    long long int b;
    int c;
    c = 1;
    b = abs(1-x) + (pow(abs(1-y), 2)) + (pow(abs(1-z), 3));

    for (int n = 1; n != 100; n++){
        a = abs(n-x) + (pow(abs(n-y), 2)) + (pow(abs(n-z), 3));
        if (a<b){
            b = a;
            c = n;
        }
    }
    printf("%d",c);
    return 0;
}