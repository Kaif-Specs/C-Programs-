#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 34, 5, 6, 4, 3, 5, 6};
    int target = 34;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Target found at index " << i;
            return 0;   // stop after finding
        }
    }

    cout << "Target not found";
    return 0;
}
