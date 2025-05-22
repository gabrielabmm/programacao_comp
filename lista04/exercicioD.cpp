#include <bits/stdc++.h>
using namespace std;

int main(){
int n, an, i, contador, j, valor;
vector<int> S;
vector<int> Sn;

cin >> n;

for (i=0; i< n; i++){
 cin >> an;

S.push_back(an);

}

for (i=0; i< S.size(); i++){
    for (j= S.size() - 1; j > i ; j--){
if (S[i] > S[j]){
valor = S[i] - S[j];
S[i]= S[i] - valor;
S[j]= S[j] + valor;

}

}

}

for (i=0; i< S.size(); i++){
cout << S[i] << " ";
}

return 0;}
