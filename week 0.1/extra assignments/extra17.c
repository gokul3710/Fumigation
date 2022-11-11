#include <stdio.h>

int main(void){
    float w1,w=20,toKg=1000;
    int price,add=170,qu;
    scanf("%f",&w1);
    w=w1*toKg;
    printf("%f",w);
    if(w<=500){
        printf("Pay 200rs");
    }else if(w>500){
        qu = w/500;
        price = (qu -1)*170+200;
        printf("pay %d",price);
    }
    return 0;
}