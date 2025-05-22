#include <bits/stdc++.h>
using namespace std;

int main(){
int N, i;
vector <string> Sn;
string S, result, a, b;


cin >> N;

for (i=0; i < N; i++){

    cin >> S;

Sn.push_back(S);

}

sort(Sn.begin(), Sn.end(), [](const string& a, const string& b){
    return a.size() < b.size();
});

result = "";

for (i=0; i < Sn.size(); i++){
result += Sn[i];

}

cout << result << endl;

return 0;
}
