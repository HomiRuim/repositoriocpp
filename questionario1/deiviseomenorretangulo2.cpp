#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> matriz(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matriz[i][j];
        }
    }
    int cima = n, baixo = -1, esq = m, dir = -1;
    int count = 0;
    for (int i = 0; i < n; ++i) { /*limites*/
        for (int j = 0; j < m; ++j) {
            if (matriz[i][j] == '1') {
                cima = min(cima, i);
                baixo = max(baixo, i);
                esq = min(esq, j);
                dir = max(dir, j);
            }
            else {
              count++;
            }
        }
    }
    int altura = baixo - cima + 1;
    int largura = dir - esq + 1;
    if (n*m == count) {
        cout << "0x0" << endl;
    } else {
        cout << largura << "x" << altura << endl;
    }
    return 0;
}
