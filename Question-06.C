/*Write a program to print greater between two numbers. Print one number of both are
the same*/

#include<stdio.h>
int main()
{
    int a , b ;
    printf("Enter a number : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("a = %d is greater",a);
    else 
        printf("b = %d is greater",b);

    return 0;
}
