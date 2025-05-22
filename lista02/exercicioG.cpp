#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sequence(8);

    for (int i = 0; i < 8; i++) {
        cin >> sequence[i];
    }

    for (int i = 0; i < 7; i++) {
        if (sequence[i] > sequence[i + 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (sequence[i] < 100 || sequence[i] > 675) {
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 8; i++) {
        if (sequence[i] % 25 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

   
    cout << "Yes" << endl;
    return 0;
}
