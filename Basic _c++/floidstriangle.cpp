#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Please enter a positive integer.\n";
        return 1;
    }

    int number = 1;
    for (int i = 1; i <= n; ++i) {         // row loop
        for (int j = 1; j <= i; ++j) {     // column loop (j prints i numbers)
            cout << number << " ";
            ++number;
        }
        cout << '\n';
    }
    return 0;
}