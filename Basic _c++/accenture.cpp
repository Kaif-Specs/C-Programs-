#include <iostream>
using namespace std;

int diffsum(int m, int n) {
    int sumdiv = 0;
    int sumnotdiv = 0;

    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            sumdiv += i;
        } else {
            sumnotdiv += i;
        }
    }

    return sumnotdiv - sumdiv;
}
int main() {
    int m, n;
    cin >> m >> n;
    cout << diffsum(m, n);
    return 0;
}
