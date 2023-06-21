/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
int main()
{
    char x ; 
    printf("Enter a character : ");
    scanf("%c",&x);

    if('A' < x && 'Z' > x )
        printf("Upper Case");

    else if ('a' < x && 'z' > x )
        printf("Lower Case");

    else if ('0' < x && '9' > x )
        printf("Digit");
    
    else 
        printf("Special Character");
    
    return 0;
}
