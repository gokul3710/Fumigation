#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    int a[10] = {5,564,54,68,15,68,15,64,546,588},b[100],sum=0,i,j,flag=1,k=0;
    for(i=0;i<10;i++){
        sum = sum + a[i];
    }
    if(sum%2 != 0){
        for(i=0;i<10;i++){
            for(j=0;j<=5;j++){
                if(a[i]%j == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag=1){
                b[k]=a[i];
                k++;
            }
        }
    }else{
        printf("Sum of the array is even\n");
    }

    for(i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    
}