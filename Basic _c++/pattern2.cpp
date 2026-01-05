#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 - i; j++)
            cout << " ";
        for(int j = 0; j < i + 1; j++)
            cout << "@";
        cout << "    *" << endl;
    }
    cout << "@@@*****" << endl;
    for(int i = 2; i > 0; i--){
        for(int j = 0; j < 3                   - i; j++)
            cout << " ";
        for(int j = 0; j < i; j++)
            cout << "@";
        cout << endl;
    }
}