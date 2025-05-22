#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, i;
    string result;

    cin >> N;

    vector <int> seq;
    vector <int> seq2;

    for (i= 0; i < N; i++){
cin >> A;

seq.push_back(A);
seq2.push_back(A);
    }

    sort(seq.begin(), seq.end());

    result = "Yes";

    for (i=0; i < seq.size(); i++){
if (seq[i] != seq2[i]){
    result = "No";
    break;
} 
if (seq[i] == seq [i+1]){
    result = "No";
    break;
}
}

    cout << result << endl;


return 0;

}
