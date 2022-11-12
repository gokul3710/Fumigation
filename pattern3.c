#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit=2;
    for(i=1;i<=9;i++){
        for(j=1;j<=2*limit;j++){
            if(j==1 || i==2 || i==5 || i==7){
                printf("* ");
            } 
        }
        printf("\n");
        if(i%2==0){
            limit++;
        }
    }
}