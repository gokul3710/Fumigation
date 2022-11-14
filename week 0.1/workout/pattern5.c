#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j;
    int n = 5,k=1;
    for(i=1;i<2*n;i++){
        for(j=1;j<2*n;j++){
            if(i<=k || i >= 2*n-k || j <= k || j >= 2*n-k){
                printf("%d ",k);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}