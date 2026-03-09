#include <bits/stdc++.h>
using namespace std;

int main(){

    int X, Y, Z, result;

cin >> X >> Y >> Z;

result = 0;

for (int t = 0;  t <= 200; t++){

    if (t + X == Z * (t + Y)){
        cout << "YES";
        result += 1;
        break;
    }
}

if (result == 0){
    cout << "NO";
}

return 0;

}
