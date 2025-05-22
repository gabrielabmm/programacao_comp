#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;

    cin >> t;

 while (t--){
int n, num;
vector <int> lista;

     cin >> n;

for (int i = 0; i < n; i++){

     cin >> num;

lista.push_back(num);

}

int j = 0;
int k = n - 1;

while (j <= k){
    if (j == k) {
cout << lista[j] << " ";

} else {
cout << lista[j] << " " << lista[k] << " ";

}
    j++;
    k--;
}

cout << "\n";
    }


    return 0;
}
