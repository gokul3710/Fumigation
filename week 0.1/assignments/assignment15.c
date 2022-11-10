#include <stdio.h>
#include <stdlib.h>
int getArray();
int displayArray();

int main(void){
    getArray();
    displayArray();
    return 0;
}

int getArray(){
    int i,array[3];
    printf("Enter 3 Numbers\n");
    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
    }

}

void displayArray(){
    int i,array[3];
    for(i=0;i<3;i++){
        printf("%d ",array[i]);
    }
}