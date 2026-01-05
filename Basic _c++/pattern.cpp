#include<bits/stdc++.h>
using namespace std;
int main(){
    // First Part
    for(int i = 0;i < 3; i++)
    {
        cout << "   ";
        for(int j = 0; j < 2 - i; j++)
            cout << " ";
        for(int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }
    // Second part
    for(int i = 0; i < 5; i++)
    {
        // cout << "    @" << endl;
        for(int j = 0; j < 6;j++)
        {
            if(j == 5) cout << "@" << endl;
            else cout << " ";
        }
    }
    // Third Part
    // cout << "  *****"<< endl;
    for(int i = 0; i < 5; i++)
    {
        // cout << "  *   *" << endl
        for(int j = 0; j < 9;j++){
            if(i == 0 && j > 1){
                cout << "*";
            }
            else if(j == 2 || j == 8){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    // Last Part
    for(int i = 3;i > 0; i--)
    {
        for(int j = 0; j < 3 - i; j++)
            cout << " ";
        for(int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << " ";
        for(int j = 0; j < 3 - i; j++)
            cout << "  ";
        for(int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}