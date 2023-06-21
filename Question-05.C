//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);

    if(a>99 && a<1000)
        printf("Three digit number");
    else 
        printf("Not");

    return 0;
}
