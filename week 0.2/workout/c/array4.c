#include <stdio.h>
#include <stdlib.h>

int main(void){
   int i,j,arr[100],fq[100];
   for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
    fq[i]=0;
   } 
   for(i=0;i<10;i++){
    if(fq[i]==0 && arr[i]%3==0){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                fq[j]=-1;
            }
            fq[i]=1;
        }
    }
   }
   for(i=0;i<10;i++){
    if(fq[i]==1){
        printf("\n%d ",arr[i]);
    }
   }
}