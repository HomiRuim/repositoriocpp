#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m, menora, menorl;
  cin >> n >> m;
  vector<vector<char>> matriz(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matriz[i][j];
    }
  }
  menora = n; 
  menorl = m;
  for (int i = 0; i < n; i++) { /*linha*/
    for (int j = 0; j < m; j++) { /*elemento da linha*/
      if (matriz[i][j] == '1') {
        int altura = n - i, largura = m - j;
        if (altura < menora && largura < menorl) {
          menora = altura;
          menorl = largura;
        }
      }
    }
  }
  cout << menorl << "x" << menora << endl;
  return 0;
}
