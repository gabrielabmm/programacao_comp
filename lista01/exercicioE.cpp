#include <bits/stdc++.h>
using namespace std;

int main() {
int A, B, C;

cin >> A >> B >> C;

if (( A + B) == C || ( A + C)==B|| ( B + C)==A ||( A == B && B == C )) {
    cout << " Yes";

} else {cout << "No"; }

return 0;
} 
