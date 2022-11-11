#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j;
    for(i=1;i<6;i++){
        for(j=1;j<12;j++){
            if(i+j==7 || j-i == 5){
                printf(" 1 ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}