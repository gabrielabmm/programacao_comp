#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q, query;
    cin >> N >> Q;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

   sort(arr.begin(), arr.end());

    for (int i = 0; i < Q; i++) {
        cin >> query;

        int l = 0;
        int r = N - 1;
        int resultado = -1;

        while (l <= r) {
            int mid = (l+r)/ 2;

            if (arr[mid] < query) {
                l = mid + 1;
            } else if (arr[mid] > query) {
                r = mid - 1;
            } else {
                resultado = mid;
                break;
            }
        }

        if (resultado == -1) {
            cout << "-1\n"; 
        } else {
            cout << resultado << "\n"; 
        }
    }

    return 0;
}
