#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,i,j,numbers[100],count=0;
    printf("enter a limit");
    scanf("%d",&limit);
    printf("enter %d numbers",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&numbers[i]);
    }

    printf("\nRepeating numbers are: ");

    for(i=0;i<limit;i++){
        count=0;
        for(j=0;j<limit;j++){
            if(numbers[i]==numbers[j]){
                count++;
            }
        }
        if(count>=2){
            printf("%d ",numbers[i]);
            numbers[i]=0;
        }
    }
}