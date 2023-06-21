/* Write a program which takes the month number as an input and display number of
days in that month. */

#include<stdio.h>
int main()
{
    int x ;
    printf("Enter month number (1 - 12) : ");
    scanf("%d",&x);

    if(x==1)
        printf("January has 31 days. ");
    else if(x==2)
        printf("February has 28 days.");
    else if(x==3)
        printf("March has 31 days.");
    else if(x==4)
        printf("April has 30 days.");
    else if(x==5)
        printf("May has 31 days.");
    else if(x==6)
        printf("June has 30 days.");
    else if(x==7)
        printf("July has 31 days.");
    else if(x==8)
        printf("August has 31 days.");
    else if(x==9)
        printf("September has 30 days.");
    else if(x==10)
        printf("October has 31 days.");
    else if(x==11)
        printf("November has 30 days.");
    else if(x==12)
        printf("December has 31 days.");
    
    return 0;
}
