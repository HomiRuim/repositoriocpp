#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int xinicial, yinicial;
vector<int> posicoes;
vector<int> precos;

int calcposic(int x, int y) {
  int z1 = abs(x - xinicial) + abs(y - yinicial);
  posicoes.push_back(z1);
  return z1;
}

int calcpreco(int z, int precorig) {
  int z2 = (z * 2) + precorig;
  precos.push_back(z2);
  return z2;
}

int main() {
  int N, count, xrest, yrest, preco;
  cin >> N >> xinicial >> yinicial;
  vector<vector<int>> restaurantes;
  vector<int> index;
  count = 0;
  while (count < N) {
    cin >> xrest >> yrest >> preco;
    restaurantes.push_back({xrest, yrest, preco});
    count++;
  }
  for (int i = 0; i < restaurantes.size(); i++) {
    bool checker = false;
    for (int j = 0; j < restaurantes[i].size(); j++) { /*iterando em cada restaurante*/
      int posic = calcposic(restaurantes[i][0], restaurantes[i][1]);
      if (checker == false){
        index.push_back(calcpreco(posic, restaurantes[i][2]));
        checker = true;
      }
      for (int z = 0; z < index.size(); z++) {
        cout << index[z] << endl;
      }
    }
  }
  auto iterador = min_element(begin(index), end(index));
  int indexmenorv = distance(begin(index), iterador);
  cout << *iterador << " " << indexmenorv+1;
  return 0;
}