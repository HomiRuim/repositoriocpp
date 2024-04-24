    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        vector<string> v;
     
        while(t--){
            int n;
            string str;
            string sub_str = "";
     
            cin >> n;
            cin >> str;
            for (int j = 0; j<n; j++){
                sub_str += str[n-1];
            }
            v.push_back(sub_str);
        }
        for( string x: v){
            cout << x << "\n";
        }
        return 0;
    }