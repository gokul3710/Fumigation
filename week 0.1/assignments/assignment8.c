#include <stdio.h>
#include <stdlib.h>

int main(void){
    int limit,i,sum=0;
    printf("Enter a limit\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        if(i%2 != 0){
            sum = sum + i;
        }
    }
    printf("Sum of the numbers is : %d",sum);
    return 0;
}