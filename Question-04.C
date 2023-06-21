/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);

    if(a & 1)
        printf("ODD");
    else 
        printf("EVEN");

    return 0;
}
