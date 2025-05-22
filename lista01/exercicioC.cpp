#include <bits/stdc++.h>
using namespace std;

int main() {
int L, R;

cin >> L >> R;

if (L==1 && R==1 or L==0 && R==0) {
    cout << "Invalid";
}

else if (L==1 && R==0) {
    cout << "Yes";
}

else {cout << "No"; }

return 0;
} 
