#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> qntd(n);
    for (int i = 0; i < n; i++) {
        cin >> qntd[i];
    }

    int soma = 0;
    int livros = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        soma += qntd[r];

        while (soma > t) {
            soma -= qntd[l];
            l++;
        }

        livros = max(livros, r - l + 1);
    }

    cout << livros;
    return 0;
}
