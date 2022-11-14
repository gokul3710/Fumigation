#include <stdio.h>
#include <stdlib.h>

int main(void){
    f(5);
}

f(n){
    if(n<=1){
        return ;
    }else{
    f(n-1);
    printf("%d\n",n);
    f(n-1);
    }
}