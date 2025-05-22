#include <bits/stdc++.h>
using namespace std;

int main(){
int N, V, i, C, valorMax, c;

    cin >> N;

    vector <int> vetor1;
    vector <int> vetor2;

for (i=0; i < N; i++){

cin >> V;

vetor1.push_back(V);

}

for (i=0; i < N; i++){

    cin >> C;
    
    vetor2.push_back(C);
    }
valorMax = 0;

    for (i=0; i < N; i++){
       if (vetor1[i] - vetor2[i] > 0){
valorMax += vetor1[i] - vetor2[i];
       }
}
cout << valorMax << endl;
    
    return 0;
}
