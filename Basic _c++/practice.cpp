#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    if (!(cin >> n) || n <= 0) 
    return 0;
    for (int i = 1; i <= n; ++i) {
        cout<<string(n - i, ' ');
        cout<<string(2 * i - 1, '*') << '\n';
    }
    for (int i = n - 1; i >= 1; --i) {
        cout<<string(n - i, ' ');
        cout<<string(2 * i - 1,'*') << '\n';
    }

    return 0;
}
