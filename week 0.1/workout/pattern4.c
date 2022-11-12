#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j;
    int n=9;
    for(i=1;i<=n;i++){
        for(j=1;j<2*n;j++){
        
            if(i+j<=n+1){
                printf("%d ",j);
            }else if(j-i<n-1){
                printf("  ");
            }else{
                printf("%d ",2*n-j);
            }
        }
        printf("\n");
    }
}