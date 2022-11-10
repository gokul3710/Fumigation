#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char name[100];
    int length,i,j,flag=0;
    printf("Enter a String\n");
    scanf("%s",&name);
    length=strlen(name);
    for(i=0;i<length;i++){
        if(name[i]==name[length-i-1]){
            flag=1;
        }else{
            flag=0;
            break;
        }
    }
    
    if(flag==1){
        printf("The entered word is a palindrome");
    }else{
        printf("The entered word is not a palindrome");
    }

    return 0;
}