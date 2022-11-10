#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int income;
    float tax;
    printf("Enter your Annual Income\n");
    scanf("%d",&income);
    if (income <= 250000)
    {
        printf("You dont have to pay any tax.");
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = (income * 5) / 100;
        printf("Income Ta Amount : %f", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = (income * 20) / 100;
        printf("Income Ta Amount : %f", tax);
    }
    else if (income > 1000000 && income <= 5000000)
    {
        tax = (income * 30) / 100;
        printf("Income Ta Amount : %f", tax);
    }
    else
    {
        printf("Enter a valid income");
    }
    return 0;
}