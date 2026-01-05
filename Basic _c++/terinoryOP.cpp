#include<iostream>
int main ()
{
    int number;
    std::cout<<"Give the number :";
    std::cin>>number;
    number %2 ? std::cout<<"The no is even ": std::cout<<"The no is odd";
}