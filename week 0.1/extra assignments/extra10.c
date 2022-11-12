#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,count=65;
    for(i=1;i<6;i++){
        count=65;
        for(j=1;j<12;j++){
            if(j-i == 5){
                printf("A");
            }else if(j-i>5){
                printf(" ");
            }else if(j+i>=7){
                printf("%c",count);
                count++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}