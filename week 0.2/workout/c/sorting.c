#include <stdio.h>

int main(void){
    int i,j,temp;
    int arr[]={57,321,564,231,74,51,64,31,54,354};
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted values : ");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nSmallest value is : %d",arr[0]);
    printf("\nSmallest value is : %d",arr[9]);
}