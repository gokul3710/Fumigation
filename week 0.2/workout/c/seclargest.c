#include <stdio.h>

int main(void){
    int i,j,arr[]={41,5,2,1,5,85,4,2,4,5},larg,sec,small, secsmall;
    // for(i=0;i<10;i++){
    //     scanf("%d",&arr[i]);
    // }
    larg = arr[0];
    for(i=1;i<10;i++){
        if(larg<arr[i]){
            sec = larg;
            larg = arr[i];
        }
    }

    small = arr[0];
    for(i=1;i<10;i++){
        if(small>arr[i]){
            secsmall = small;
            small = arr[i];
        }
    }

    printf("Largest number is : %d\n",larg);
    printf("Second largest number is : %d\n",sec);
    printf("Smallest number is : %d\n",small);
    printf("Second smallest number is : %d",secsmall);
}