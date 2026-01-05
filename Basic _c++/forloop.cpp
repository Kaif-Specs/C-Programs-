#include<iostream>
int main()
{
    for(int i=1; i<=20; i+=2)
    {if (i ==13){
        break;//break is used here || continue is used to leave that particular step.
    }
    std::cout<<i<<'\n';
}
std::cout<<"Happy Birthday\n";
return 0;
}


