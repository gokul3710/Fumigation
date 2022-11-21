#include <stdio.h>

int main(void){
    int a[]={1,2,54,25,7,4,5},i,j,limit=6,k;
    printf("Sorted array is: \n");
    for(i=0;i<limit;i++){
        if(a[i]%2==0){
            limit=limit-1;
            
            for(k=i;k<limit;k++){
                a[k]=a[k+1];
                
            }
            i--;
            pr
        }
        printf("%d ",a[i]);
    }

}