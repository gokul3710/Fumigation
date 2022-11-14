#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Enter number of people\n");
    scanf("%d",&n);
    printf("Total number of handshakes is : %d ",f(n-1));
}

int f(int n){
    if(n<1){
        return;
    }else{
        return n+ f(n-1);
    }
}