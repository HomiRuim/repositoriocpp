#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> comp(n);
    for (int i = 0; i < n; ++i) {
        cin >> comp[i];
    }
    sort(comp.rbegin(), comp.rend());
    int dias = 0;
    int probresolv = 0;
    for (int i = 0; i < n; ++i) {
        probresolv += comp[i];
        dias++;
        if (probresolv < dias*(dias+1)/2) {
            break;
        }
    }
    cout << dias-1 << endl;
    return 0;
}