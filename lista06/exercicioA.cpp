#include <bits/stdc++.h>
using namespace std;

int main() {
int n, numCarta, sereja, dima, i, j, vez;
vector <int> cartas;


cin >> n;

for (i=0; i < n; i++){
cin >> numCarta;

cartas.push_back(numCarta);
}

i = 0;
j = n-1;

sereja = 0;
dima = 0;
vez = 1;


while (i <= j){
    
    if (vez == 1){
if (cartas[i] > cartas[j]){
sereja += cartas[i];
vez = 2;
i++;
} else {
sereja += cartas[j];
vez = 2;
j--;
}


    }else {
        if (cartas[i] > cartas[j]){
        dima += cartas[i];
        vez = 1;
        i++;
        } else {
        dima += cartas[j];
        vez = 1;
        j--;
        }

    }

}

cout << sereja << " " << dima;
   return 0;
}

