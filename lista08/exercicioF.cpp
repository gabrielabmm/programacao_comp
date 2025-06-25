#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a;
    cin >> t;

    for (int i=0; i < t; i++) {
        cin >> n;
        long long soma = 0;

        for (int i = 0; i < n; i++) {
            cin >> a;
            soma += a;
        }

        long long raiz = sqrt(soma);
        if (raiz * raiz == soma) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
