/*Write a program to check whether a given number is an even number or an odd
number.*/

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);

    if(a % 2 == 0)
        printf("EVEN");
    else 
        printf("ODD");

    return 0;
}
