#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, count;
    string a;
    vector<string>strings;
    cin >> n;
    count = 0;
    while (count < n) {
        cin >> a;
        strings.push_back(a);
        count++;
    }
    for (int i = 0; i < strings.size(); i++){
        int digit0 = strings[i][0];
        int digit1 = strings[i][1];
        int digit2 = strings[i][2];
        int digit3 = strings[i][3];
        int digit4 = strings[i][4];
        int digit5 = strings[i][5];
    if ((digit0+digit1+digit2) == (digit3+digit4+digit5)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    }
    return 0;
}