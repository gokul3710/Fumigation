#include <stdio.h>


int main(void){
    int i,j;
    for(i=1;i<=2*5;i++){
        for(j=1;j<=2*5;j++){
            if(i>=j && i+j<=11 || i<=j && i+j>=11-*********){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}