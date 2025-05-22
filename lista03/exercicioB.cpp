#include <bits/stdc++.h>
using namespace std;

int main(){
string S, result;
int i;

cin >> S;

result = "Yes";

if (S.size() < 2 || S.size() % 2 != 0){
    result = "No";
}

    for (i=0; i < S.size(); i++){


        if (i % 2 != 0){    
            if (S[i] != 'i'){
                result = "No";
                break;

            }
       
        }else {
            if (S[i] != 'h'){
                result = "No";
                break;
            }

        }
    }
cout << result << endl;


return 0;

}
