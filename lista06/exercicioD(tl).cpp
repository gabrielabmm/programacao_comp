#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int contador = 0;


    for (int i = 0; i < n; i++) {
        int valor = 0;
        for (int j = i; j < n; j++) {
            valor += arr[j];
            if (valor == x) {
                contador++;
                break;
            }
        }
    }

    cout << contador;

    return 0;
}
