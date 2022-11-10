#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size,i,array[100],j;
    printf("Enter the size of an array\n");
    scanf("%d",&size);

    printf("Enter %d values of array\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]<array[j]){
                array[i]=array[i]+array[j];
                array[j]=array[i]-array[j];
                array[i]=array[i]-array[j];
            }
        }
    }

    printf("Array after sorting : ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}