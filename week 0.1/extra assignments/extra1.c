#include <stdio.h>
#include <stdlib.h>
void counter(count);

int main(void){
    int count=1;
    counter(count);
    return 0;
}


void counter(count){
    if(count<9){
        printf("%d",count);
        count++;
        counter(count);
    }
}