#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[100],string[100];
    scanf("%s",name);
    copy(name,string);
    printf("%s",string);
    return 0;
}

void copy(char str1[],char str2[]){
    int length,i;
    for(length=0;str1[length]!='\0';length++);
    for(i=0;i<length;i++){
        str2[i]=str1[i];
    }
}