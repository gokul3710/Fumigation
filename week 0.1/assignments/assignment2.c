#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number1;
    float number2,sum;
    printf("Enter two numbers.\n");
    scanf("%d%f",&number1,&number2);
    sum=number1+number2;
    printf("Sum of the numbers is: %f",sum);
    return 0;
}