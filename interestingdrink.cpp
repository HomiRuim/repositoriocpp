#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, prec;
    cin >> n;
    vector<int>precos;
    while (n--){
        cin >> prec;
        precos.push_back(prec);
    }
    int nmoedas;
    cin >> nmoedas;
    int k = 0;
    sort(precos.begin(), precos.end());
    while(nmoedas--) {
        int moeda;
        cin >> moeda;
        auto iterador = upper_bound(precos.begin(), precos.end(), moeda);

        

        cout << iterador - precos.begin() << endl;
    }




    return 0;
}