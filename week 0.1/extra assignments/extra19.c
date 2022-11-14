#include <stdio.h>

int main(void){
    float w,toKg=1000;
    int price,add=170,qu;
    printf("Enter weight in Kg\n");
    scanf("%f",&w);
    w=w*toKg;
    if(w<=500){
        printf("Pay 200rs");
    }else if(w>500){
        qu = w/500;
        price = (qu -1)*170+200;
        printf("pay %d",price);
    }
    return 0;
}