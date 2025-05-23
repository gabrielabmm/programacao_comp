#include <bits/stdc++.h>
using namespace std;

int main(){
int n, x, a, valor;
vector< pair<int, int>> arr;

cin >> n >> x;

for (int i=0; i < n; i++){

cin >> a;

arr.push_back({a, i});

}

  sort(arr.begin(), arr.end());


bool sair = false;
int i=0;
int j = n-1;
int contador = 0;

while (i<n-1 && !sair && i<j){
valor = arr[i].first + arr[j].first;

if (valor == x){
    cout << (arr[j].second + 1) << " " << (arr[i].second + 1);
    contador++;
    sair = true;
       break;
} else if (valor > x){
j--;

} else if (valor < x){
i++;
}

}

if (contador == 0){
    cout << "IMPOSSIBLE";
}

    return 0;
}
