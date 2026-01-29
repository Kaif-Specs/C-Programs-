#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 8;

    int n = sizeof(arr) / sizeof(arr[0]);  // FIX 1
    int si = 0;
    int ei = n - 1;

    while (si <= ei) {   // FIX 2
        int mid = si + (ei - si) / 2;

        if (arr[mid] == target) {
            cout << "Found at index: " << mid;
            return 0;    // FIX 3
        }
        else if (arr[mid] < target)
            si = mid + 1;
        else
            ei = mid - 1;
    }

    cout << "Not found";
    return 0;
}
