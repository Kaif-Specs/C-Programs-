#include<iostream>
int main(){
    std::string name;
    // for INFINITELOOP while(1==1){}
    while (name.empty()){
        std::cout<<"Enter the name :";
        std::getline(std::cin, name);
    }
    std::cout <<"Hello"<<name;
}