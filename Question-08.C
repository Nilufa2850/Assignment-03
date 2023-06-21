//Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter three number : ");
    scanf("%d",&a);

    a % 4==0 ? printf("leap year") : printf("Non leap year");

    return 0;
}
