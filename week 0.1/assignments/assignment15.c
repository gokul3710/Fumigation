#include <stdio.h>
#include <stdlib.h>

int getArray(int a[]);
void displayArray(int a[], int size);


int main(void){
    int a[10],size;
    size = getArray(a);
    displayArray(a, size);
    return 0;
}

int getArray(int a[]){
    int i,size;
    printf("Enter the limit of array\n");
    scanf("%d",&size);
    printf("Enter %d Numbers\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    return size;
}

void displayArray(int a[], int size){
    int i;
    printf("Values of array is:\n");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}



