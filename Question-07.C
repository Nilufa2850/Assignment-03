/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/

#include<stdio.h>
int main()
{
    int a , b ,c , x ;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);

    x = b*b-4*a*c ;

    if(x > 0)
        printf("quadratic equation are real & distinct");

    else if (x == 0)
        printf("quadratic equation are real & equal");

    else if (x < 0)
        printf("quadratic equation are imaginary roots");


    return 0;
}
