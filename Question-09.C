/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/

#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
        printf("a = %d is greater",a);
    
    else 
    {
        if (b>c)
            printf("b = %d is greater",b);
        else
            printf("c = %d is greater",c);
    }
  
    return 0;
}
