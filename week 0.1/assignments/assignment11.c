#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size,i,array[100],count=0;
    printf("Enter the size of an array\n");
    scanf("%d",&size);

    printf("Enter %d values of array\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<size;i++){
        if(array[i]%2==0){
            count++;
        }
    }

    printf("Number of even numbers in the array is: %d",count);
    return 0;
}