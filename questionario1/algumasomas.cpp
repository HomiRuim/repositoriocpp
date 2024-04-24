#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int somdig(int n) {
  int total = 0;
  while (n > 0) {
    total += n % 10;
    n /= 10;
  }
  return total;
}
int func(int N, int A, int B) {
  int count = 0;
  for (int i = 1; i <= N; ++i) {
    int soma = somdig(i);
    if (A <= soma && soma <= B) {
      count += i;
    }
  }
  return count;
}
int main() {
  int N, A, B;
  cin >> N >> A >> B;
  cout << func(N, A, B) << endl;
  return 0;
}