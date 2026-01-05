#include<iostream>
void happybirthday(std::string name,int age);
int main(){
    //function is the block of reusable code
    std::string name = "Kaif";
    int age = 22;
     happybirthday(name,age);
     return 0;
}
void happybirthday(std::string name,int age){
    std::cout<<"Happy Birthday to " <<name <<'\n'; 
    std::cout<<"Happy Birthday to " <<name <<'\n'; 
    std::cout<<"Happy Birthday to " <<name <<'\n'; 
    std::cout<<"Happy Birthday to " <<name <<'\n';
    std::cout<<" you are "<<age<<'\n';
}
