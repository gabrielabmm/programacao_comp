#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m, an, i, sobra, valor;
vector <int> S;

cin >> n >> m;

for (i=0; i<n; i++){

    cin >> an;

    S.push_back(an);
}
valor = 1;

sobra = m;

for (i=0; i<S.size(); i++){

    if (S[i] <= sobra){
        sobra -= S[i];
    }else {
valor ++;

sobra = m;

sobra -= S[i];
    }
}

cout << valor << endl;

return 0;}
