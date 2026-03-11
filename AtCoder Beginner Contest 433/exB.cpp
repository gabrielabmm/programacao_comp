#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, altura;
  vector <int> alturas;
  cin >> N;

  for (int i = 0; i <= N; i++){

    int qntd = 0;

    cin >> altura;

    alturas.push_back(altura);

     for (int t = 0; t < i; t++){
       if (alturas[t] > alturas[i]){
        qntd++;
       }
  }

       if (qntd ==  0){
        cout << "-1" << "\n";
       } else {
        cout << qntd << "\n";
       }

     
  }
}
