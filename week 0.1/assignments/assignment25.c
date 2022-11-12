#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit=2,n,count=0;
    int arr[50];
    for(i=1;i<=50;i++){
        arr[i-1]=i;
    }
    for(i=1;i<=12;i++){
        if(i%5==0){
            limit = limit +2;
        }
        for(j=1;j<=limit;j++){
            if(j==1 || i == 1 || i==5 || i==12){
                printf("%d ",arr[count]);
                if(arr[count]%2 != 0){
                    count =count +3;
                }else{
                    count++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}