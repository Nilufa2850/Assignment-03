/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
    float cp , sp ;
    printf("Enter enter cost & selling prices : ");
    scanf("%f%f",&cp,&sp);

    if (sp>cp)
    {
        printf("\nProfit");
        printf("\nProfit Percentage is %f", (sp-cp)/cp*100 );
    }
    else 
    {
        printf("\nLoss");
        printf("\nLoss Percentage is %f", (cp-sp)/cp*100 );
    }   

    return 0;
}
