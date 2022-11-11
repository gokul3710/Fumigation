#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,i,j,array[100],array2[100];
    printf("Enter the limit of an array\n");
    scanf("%d",&limit);
    printf("Enter %d values",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<limit-1;i++){
        array2[i]= array[i]*array[i+1];
        printf("%d  ",array2[i]);
    }

    return 0;
}