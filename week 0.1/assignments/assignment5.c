#include <stdio.h>
#include <stdlib.h>

int main(void){
    float mark;
    printf("Enter your mark.\n");
    scanf("%f",&mark);
    if(mark<0 || mark>100){
        printf("Enter a valid mark.");
    }else if(mark>=90 && mark<=100){
        printf("Congratulations you have got A grade.");
    }else if(mark>=80 && mark<90){
        printf("Congratulations you have got B grade.");
    }else if(mark>=70 && mark<80){
        printf("Congratulations you have got C grade.");
    }else if(mark>=60 && mark<70){
        printf("Congratulations you have got D grade.");
    }else if(mark>=50 && mark<60){
        printf("Congratulations you have got E grade.");
    }else{
        printf("You have failed the exam.");
    }
    return 0;
}