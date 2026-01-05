#include<iostream>
int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"****calculator******\n";
    std::cout<<"Give Either (+ - * /) :";
    std::cin>>op;
    std::cout<<"Enter num1 : " ;
    std::cin>>num1;
    std::cout<<"Enter num2 : ";
    std::cin>>num2;
switch(op){
    case '+':
    result = num1 + num2 ; 
    std::cout<<"result:"<<result<<'\n';
    break;
 case '-':
    result = num1 - num2 ; 
    std::cout<<"result:"<<result<<'\n';
    break;
 case '*':
    result = num1 * num2 ; 
    std::cout<<"result:"<<result<<'\n';
    break;
    case '/':
    result = num1 / num2 ; 
    std::cout<<"result:"<<result<<'\n';
    break;
}
return 0;
}