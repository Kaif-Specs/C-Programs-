#include<iostream>
int main(){
    std::string name ;
    std::cout<<"enter your name :";
    std::getline(std::cin, name );
    if (name.length()>12){
        std::cout<<"Your name cannot be over 12 characters :";
    
    }
    else{
        std::cout <<"Welcome "<<name;
    }
    return 0;
}
/*more string methods in the copy */
