#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, i, j, nota;

    cin >> N;

    vector<int> Rank(N);
    vector<int> Rank2(N);
    vector<int> Rankf(N);

    for (i = 0; i < N; i++) {
        cin >> nota;
        Rank[i] = nota;
        Rank2[i] = nota;
    }

    sort(Rank.begin(), Rank.end(), [](int a, int b){
        return a > b;
    });

    int r = 1;
    for (i = 0; i < N; i++) {
        int count = 1;
        while (i + 1 < N && Rank[i] == Rank[i + 1]) {
            count++;
            i++;
        }

        
        for (int k = i - count + 1; k <= i; k++) {
            Rankf[k] = r;
        }

        r += count;
    }


    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (Rank2[i] == Rank[j]) {
                cout << Rankf[j] << " ";
                break;
            }
        }
    }

    cout << endl;

    return 0;
}
