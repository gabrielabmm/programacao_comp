#include <bits/stdc++.h>
using namespace std;

int main(){
int n, i, j;
string nome;
vector <string> lista;
map <string, int> contador;

cin >> n;

for (i=0; i < n; i++){
cin >> nome;

lista.push_back(nome);

}


for (i=0; i < n; i++){
if (contador[lista[i]] == 0) {
cout << "OK" << "\n";


  }else {
    cout << lista[i] << contador[lista[i]] << "\n";
  }

  contador[lista[i]]++;}


    return 0;
}
