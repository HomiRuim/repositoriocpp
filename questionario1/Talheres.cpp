#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int pessoas, garfos, facas, colheres;
    cin >> pessoas;
    cin >> garfos;
    cin >> facas;
    cin >> colheres;
    /*10p 3g 1f 4c*/
    long long int maxfacgarf, maxcolher, maxtotal;
    maxfacgarf = min(garfos,facas);
    maxcolher = min(pessoas,colheres);
    maxtotal = maxfacgarf + maxcolher;
    if (maxtotal > pessoas){
        cout << pessoas;
    }
    else {
        cout << maxtotal;
    }
    return 0;
}
