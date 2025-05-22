#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, t;
    string string1, string2, string3, palavra;
    vector<string> S;
    vector<string> Sn;

    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> string1 >> string2 >> string3;
        S.push_back(string1);
        S.push_back(string2);
        S.push_back(string3);
    }

    for (i = 0; i < S.size(); i += 3) {
  
        palavra = string(1, S[i][0]) + S[i+1][0] + S[i+2][0];
        Sn.push_back(palavra);
    }

    for (i = 0; i < Sn.size(); i++) {
        cout << Sn[i] << endl;
    }

    return 0;
}
