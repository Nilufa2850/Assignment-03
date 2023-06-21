/*Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include<stdio.h>
int main()
{
    char m ;
    printf("Enter a alphabet : ");
    scanf("%c",&m);

    if ('A'< m && 'Z'> m)
        printf("UPPERCASE");
    else
        printf("LOWERCASE");
    
    return 0;
}
