#include<iostream>
int main()
{
    int age;
    std::cout<<"Enter your Age : ";
    std::cin>>age;
      if (age >=100)
    {
        std::cout<<"you are too old ";
    }
    else if (age >= 18)
    {
    std::cout<<"You are Eligible";
    }
    else if (age < 0 )
    {
        std::cout<<"you havn't born yet";
    }
    else {
        std::cout<<"You are not eligible";
    }
   
  
return 0;

}