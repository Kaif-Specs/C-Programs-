//C++ program to count digits, spaces, and special characters in given string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="The Roll of Kaif is 46363@1213";
    int spacecount=0;
    int charcount=0;
    int digitcount=0;
    int capcount=0;
    int specialcount=0;
    for(char x : str)
    {
        if(x==' ')
        {
        spacecount++;
        }
        else if(x>='0'||x<='9')
        {
            digitcount++; 
        }
        else if (x >= 'A' && x <= 'Z')
        {
        capcount++;
        }
        else{
            specialcount++;
        }
    }
    cout<<"the spaces between the strings :"<<spacecount<<endl;
    cout<<"the digits between the strings :"<<digitcount<<endl;
    cout<<"the capitol between the strings :"<<capcount<<endl;
    cout<<"teh special char between teh strings :"<<specialcount;
        return 0;

}
