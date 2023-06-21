//Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int x ; 
    printf("Enter a number : ");
    scanf("%d",&x);

    if(x%7==0 || x%3==0)
        printf("Divisible");
    else
        printf("Not Divisible");
    
    return 0;
}
