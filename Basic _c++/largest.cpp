// #include<iostream>
// using namespace std;
// int main(){
//     int nums[] = {5,32,5,26,7,8,9};
//     int size = 7;
//     int smallest = INT_MAX; //this denotes the +infinity
//     int largest = INT_MIN; //this denoyes the minus infinity
//     for (int i = 0; i<size; i++){
//         smallest=min(nums[i],smallest);
//         largest=max(nums[i],largest);

//     }
//     cout<<"smallest="<<smallest<<endl;
//     cout<<"largest="<<largest<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,633,3,2,4};
    int size= 7;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i<size;i++){
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);

        
    }
    cout<<"smallest="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;
    return 0;
}