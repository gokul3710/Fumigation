#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,i,numbers[100],j;
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("Enter %d numbers",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(numbers[i]<numbers[j]){
                numbers[i]=numbers[i]+numbers[j];
                numbers[j]=numbers[i]-numbers[j];
                numbers[i]=numbers[i]-numbers[j];
            }
        }
    }
    for(i=0;i<limit;i++){
        printf("%d  ",numbers[i]);
    }
    return 0;
}