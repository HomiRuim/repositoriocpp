
/*codigo original      |
                       V           */

/*#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>problemas(n);
    for (int i = 0; i < n; ++i) {
        cin >> problemas[i];
    }
    sort(problemas.begin(), problemas.end());
    int dias = 0;
    int resolv = 0;
    for (int i = 1; i <= n; ++i) {
        auto iterador = lower_bound(problemas.begin(), problemas.end(), i);

        if (iterador == problemas.end()){
            break;
        }
        dias++;
        resolv += i;

        problemas.erase(iterador);
    }
    cout << dias;
    return 0;
}*/

/*código corrigido em tempo de limite excedido pelo gpt                 |              
                                                                        V            */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>problemas(n);
    for (int i = 0; i < n; ++i) {
        cin >> problemas[i];
    }
    sort(problemas.begin(), problemas.end());
    int dias = 0;
    auto iterador = problemas.begin();
    while (iterador != problemas.end()) {
        iterador = lower_bound(iterador, problemas.end(), dias + 1);
        if (iterador == problemas.end()) {
            break;
        }
        dias++;
        /*resolv += *iterador;*/
        iterador++;
    }
    cout << dias;
    return 0;
}

/*Comentário do gpt*/

/*Claro, vamos comparar as mudanças feitas para entender como elas contribuem para a redução da complexidade temporal:

Remoção da exclusão de elementos do vetor (erase()):

No código original, você estava usando erase() para remover elementos do vetor problemas à medida que eles eram resolvidos. Isso tinha complexidade de tempo O(n), já que todos os elementos após o elemento removido tinham que ser deslocados. Remover essa operação foi crucial, pois evitou esse custo adicional de tempo.
Uso eficiente do iterador com lower_bound():

No código original revisado, substituímos o uso do índice i por um iterador, que usamos em conjunto com lower_bound() para encontrar o próximo problema a ser resolvido. Isso evita a necessidade de percorrer todo o vetor para encontrar o próximo problema, o que em vez disso é encontrado em tempo logarítmico (O(log n)).
Redução do número de iterações:

Em vez de percorrer o vetor problemas até o fim, paramos assim que não houver mais problemas para resolver ou quando chegarmos ao final do vetor. Isso reduz o número total de iterações, o que é benéfico para o desempenho, especialmente em casos onde o número de problemas é grande.
Essas mudanças combinadas ajudam a reduzir a complexidade temporal do algoritmo, tornando-o mais eficiente e menos suscetível a exceder o limite de tempo.*/