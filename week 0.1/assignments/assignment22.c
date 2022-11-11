#include <stdio.h>
#include <stdlib.h>

int getArray(int array1[][10],int array2[][10]);
void addArray(int array1[][10],int array2[][10],int array3[][10],int size);
void displayArray(int array3[][10],int size);


int main(void){
    int array1[10][10],array2[10][10],array3[10][10],size;
    size = getArray(array1,array2);
    addArray(array1,array2,array3,size);
    displayArray(array3,size);
    return 0;
}

int getArray(int array1[][10],int array2[][10]){
    int size,i,j;
    printf("Enter the limit of array\n");
    scanf("%d",&size);
    printf("Enter %d numbers for array 1\n",size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter %d numbers for array 2\n",size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&array2[i][j]);
        }
    }
    return size;
}

void addArray(int array1[][10],int array2[][10],int array3[][10],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
}

void displayArray(int array3[][10],int size){
    int i,j;
    printf("Sum of array 1 and array 2\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d  ",array3[i][j]);
        }
        printf("\n");
    }
}


