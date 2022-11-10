#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array1[100],array2[100],size,i;
    printf("Enter the size of arrays\n");
    scanf("%d",&size);

    printf("Enter the %d values for Array 1\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&array1[i]);
    }

    printf("Enter %d values for array 2\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&array2[i]);
    }

    for(i=0;i<size;i++){
        array1[i]=array1[i]+array2[i];
        array2[i]=array1[i]-array2[i];
        array1[i]=array1[i]-array2[i];
    }

    printf("Array 1 values after swapping: ");
    for(i=0;i<size;i++){
        printf("%d ",array1[i]);
    }

    printf("\nArray 2 values after swapping: ");
    for(i=0;i<size;i++){
        printf("%d ",array2[i]);
    }

    return 0;
}