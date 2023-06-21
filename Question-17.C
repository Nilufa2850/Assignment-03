/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
int main()
{
    float x,y,z ;
    printf("Enter length of three sides of a triangle  : ");
    scanf("%d%d%d",&x,&y,&z);

    if(x+y>z && y+z>x && x+z>y)
        printf("Triangle is valid");
    else 
        printf("NOT");
    
    return 0;
}
