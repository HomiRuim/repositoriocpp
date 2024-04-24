#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool anobonito(int ano) {
  int numeros[10] = {0};
  while (ano > 0) {
    int num = ano % 10;
    if (numeros[num] > 0) {
      return false;
    }
    numeros[num]++;
    ano /= 10;
  }
  return true;
}

int main() {
  int ano;
  cin >> ano;
  int proxanobonito = ano + 1;
  while (!anobonito(proxanobonito)) {
    proxanobonito++;
  }
  cout << proxanobonito;
  return 0;
}