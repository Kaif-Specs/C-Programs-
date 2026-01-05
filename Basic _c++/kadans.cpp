#include<iostream>
using namespace std;
int main(){
    int arr[] = {-2,5,3,-5,0};
    int n= 5;
int max = 0;
int cs = 0;
for (int i = 0; i<n; i++){
     cs = cs + arr[i];
     if (cs<0){
        cs = 0;
     } 
     if (cs > max){
        max = cs;
     }
}
cout<<max;
}