#include <bits/stdc++.h>
using namespace std;

int main(){
int n, i, j, contador;
string nome;
vector <string> lista;

cin >> n;

for (i=0; i < n; i++){
cin >> nome;

lista.push_back(nome);

}

contador = 0; 

for (i=0; i < n; i++){
  for (j=0; j < i; j++){
if (lista[i] == lista[j])
contador++;

  } if (contador == 0){
cout << "NO" << "\n";


  }else {
    cout << "YES" << "\n";
  }

  contador = 0;

}


    return 0;
}
