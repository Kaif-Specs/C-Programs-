/*#include<iostream>
int main(){
    int arr[]={1,2,3,4,5};
    std::cout <<sizeof(arr)/sizeof(arr[0]);
    return 0;
}
    */

#include <iostream>
int main() {
    int arr[] = {4, 5, 3, 7, 8, 6};
    int max = arr[0];

    for(int i = 1; i < 6; i++) {   
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int min = arr[0];

    for(int i = 1; i < 6; i++) {   
        if(arr[i] > min) {
            min = arr[i];
        }
    }
std::cout << "Maximum element = " << max;
    std::cout << "Minimum element = " << min;
    return 0;
}

