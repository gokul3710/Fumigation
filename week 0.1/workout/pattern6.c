#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j,n=5;
    for (i = 1; i < 2*n; i++){
        for (j = 1; j < 2*n ; j++)
        {
            if(i+j<=2*n && i>=j || i+j>=2*n && i<=j ){
                printf("* ");

            }else{
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
}