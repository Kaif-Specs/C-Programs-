#include<iostream>
#include<string>
int stringLength(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++);  
    return i;  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    cin>>(str);

    int len = stringLength(str);

    printf("Length of the string = %d", len);

    return 0;
}
