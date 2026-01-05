#include<iostream>
int main(){
    int temp;
    std::cout<<"Enter the temperature : ";
    std::cin>>temp;
    if (temp > 0 && temp < 30){
        std::cout<<"The temprature is good !";

    }
    else{
        std::cout<<"The temperature is bad !";
    }
    return 0;

}
/*&& check if two conditions are true 
 || check if at least one of two condition is true .
 ! reverse the logical state of its operand*/
/* if (temp <=0 || temp >=30)*/ 
/* if (! sunny){
std::cout<<"it is sunny outside";
}
else {
std::cout<<"it is cludy outside"}*/