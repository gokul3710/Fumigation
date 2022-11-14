#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[100];
    int i,ch=0,j,spl=0,dig=0;
    gets(name);
    for(i=0;name[i]!='\0';i++);
    for(j=0;j<i;j++){
        if(name[j]>=65 && name[j]<=90 || name[j]>=97 && name[j]<=122){
            ch= ch+1;
        }
        if(name[j]>=48 && name[j]<=57){
            dig++;
        }
        if(name[j]>=32 && name[j]<=47 || name[j]>=58 && name[j]<=64){
            spl++;
        }
    }
    printf("%d %d %d",ch,spl,dig);
    return 0;
}