#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size,i,j;
    printf("Enter the size of the arrays\n");
    scanf("%d",&size);


    int array1[size][size],array2[size][size],array[size][size];
    
    printf("Enter the values of the array1\n");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&array1[i][j]);
        }
    }

    printf("Enter the values of the array2\n");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&array2[i][j]);
        }
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            array[i][j]=array1[i][j]+array2[i][j];
        }
    }


    printf("Array after addition\n");

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}