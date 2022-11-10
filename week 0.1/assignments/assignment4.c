#include <stdio.h>
#include <stdlib.h>

int main(void){
    float mark;
    printf("Enter Your Mark.\n");
    scanf("%f",&mark);
    if(mark>=50 && mark<=100){
        printf("Congatulations you have passed the exam.");
    }else if(mark<50 && mark>=0){
        printf("You have failed the exam.");
    }else{
        printf("Enter a valid mark.");
    }
    return 0;
}