#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[100];
    int i;
    printf("Enter a name\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++){
        if(name[i]>=97 && name[i]<=122){
            name[i]=name[i]-32;
        }
    }
    printf("%s",name);
    return 0;
}
