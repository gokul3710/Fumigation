#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,arr[100],k;
    scanf("%d",&limit);
    for( i=0;i<limit;i++){
            scanf("%d",&arr[i]);
        }
        for( i=0;i<limit-1;i++){
            for( j=1;j<limit;j++){
                if(arr[i]==arr[j]){
                    limit=limit-1;
                    for( k=j;j<limit-1;j++){
                        arr[k]=arr[k+1];
                    }
                }
            }
        }
        for(i=0;i<limit;i++){
            printf("%d",arr[i]);
        }
}