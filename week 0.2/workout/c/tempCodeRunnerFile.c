#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,count=65,k=0,n=5;
    for(i=1;i<2*n;i++){
        if(i<=n){
            k++;
        }
        else{
            k--;
            count = count -2*k+1;
        }
        for(j=1;j<k;j++){
            printf("%c",count);
            count++;
        }
        printf("\n");
    }
}