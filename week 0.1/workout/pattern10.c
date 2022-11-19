#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j;
    int n=5;
    for(i=1;i<2*n;i++){
        for(j=1;j<=2*n;j++){
            if(i+j<=10 && i >= j ){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}