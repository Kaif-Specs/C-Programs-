#include<iostream>
int main(){
    //psuedo rsndom numbers no .
    srand(time(NULL));
    int num =(rand() % 6)+1;
    std::cout <<num;
}