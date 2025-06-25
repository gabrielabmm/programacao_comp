#include <bits/stdc++.h>
using namespace std;

int main(){
int n, k;

cin >> n >> k;

int tempo = k;

int contador = 0;

for (int i=1; i <= n; i++){
  if (tempo < 240){
tempo += 5*i;
contador++;
  } else if(tempo == 240){
break;
  } else if(tempo > 240){
break;
  }
}

if (tempo <= 240){
cout << contador;
} else {

    cout << contador - 1;
}
    return 0;
}
