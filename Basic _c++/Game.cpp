#include<iostream>
int main(){
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num =(rand()%100)+1;
    std::cout<<"$$$$$$$$ NUMBER GUESSING GAME $$$$$$$";
    do{
        std::cout <<"Enter the no between 1-100 : ";
        std::cin>>guess;
        if(guess > num){
            std::cout<<"Too high!\n";
        }
        else if(guess < num){
            std::cout<<"Too Low\n";
        }
        else{
            std::cout<<"Correct! # of tries : "<<tries<<'\n';
        }
        }
        while(guess != num);
        

    
    

return 0;
    }