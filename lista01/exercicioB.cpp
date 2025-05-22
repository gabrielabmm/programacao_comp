#include <bits/stdc++.h>
using namespace std;

int main() {
int a, b;
int quadrado;

cin >> a >> b;
if(a >= 1 && a <= 2025 && b >= 1 && b <= 2025) {
    quadrado = (a + b)*(a + b); 
}

cout << quadrado << "\n";
return 0;
} 
