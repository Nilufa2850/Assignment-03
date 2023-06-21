//Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);

    if(a > 0)
        printf("Positive");
    else 
        printf("Non-positive");

    return 0;
}

// 0 and 0> : Non Positive 
