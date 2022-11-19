#include <stdio.h>

int main(void){
    int i,j,n=3;
    for(i=1;i<=3;i++,n--){
        for(j=4*n;j>=1;j--){
            printf("* ");
        }
        
        printf("\n");
        for(j=1;j<=2*i;j++){
            printf("*\n");
        }
    }
}