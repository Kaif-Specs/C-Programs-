//weather the letter is vovel or consonents ?
// size of ()
// union program 
//lab file ----------------------------------------------------------------------------------------------------------------------------------
// program to read end print number  input from user basically how to take input .
// program to print the ASCII value of a character .
// program to swap two numbers .
// program to check even or odd int .
// prgram to print the size of 4 data types .
// -------------------------------------------------------------------------------------------------------------------------------------------
/*#include<iostream>
int main()
{
int a;
char b;
std::cout<<"GIVE THE NUMBER A : ";
std::cin>> a;
std::cout<<"GIVE THE CHARACTER : ";
std::cin>>b;*/
/*#include <iostream>

int main() {
    int a;
    std::cout << "gIVE THE NUMBER : ";
    std::cin >> a;

    
    if (a % 2 == 0)
    {
        std::cout << "THE NO IS EVEN !";
    }
    else 
    {
        std::cout << "THE NO IS ODD !";
    }

    return 0;
}*/
#include <iostream>
#include <utility> 

int main() {
    int a = 10;
    int b = 25;

    std::cout << "Before swap: a = " << a << ", b = " << b;

    
    std::swap(a, b);

    std::cout << "After swap: a = " << a << ", b = " << b;
    
    return 0;
}
/*#include <iostream>

int main() {
    char character;
    
    
    std::cout << "Enter a character: ";
    std::cin >> character;

   
    std::cout << "The character is: " << character;
    
    
    std::cout << "The ASCII value is: " << (int)character;
    
    return 0;
}

#include <iostream>

int main() {
    
    std::cout << "Size of int: " << sizeof(int) << " bytes \n";

   
    std::cout << "Size of char: " << sizeof(char) << " byte \n";

    
    std::cout << "Size of float: " << sizeof(float) << " bytes \n";

    
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";

    return 0;
}

#include <iostream>
#include <cctype> 

int main() {
    char letter;
    bool isLowercaseVowel, isUppercaseVowel;

    
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    
    isLowercaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
    isUppercaseVowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

    
    if (!std::isalpha(letter)) 
    {
        std::cout << letter << " is not an alphabet." << std::endl;
    } 
    else if (isLowercaseVowel || isUppercaseVowel) 
    {
        std::cout << letter << " is a VOWEL." << std::endl;
    } 
    else 
    {
        std::cout << letter << " is a CONSONANT." << std::endl;
    }
    return 0;
}*\






    




