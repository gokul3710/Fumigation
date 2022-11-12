#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str1[100],str2[100];
    int i,j,k,count1=0,count2=0,flag=0;
    printf("Enter two strings\n");
    scanf("%s",str1);
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++);
    if(i != j){
        printf("The entered strings are not same.");
    }else{
        for(k=0;k<i;k++){
                if(str1[k]!=str2[k]){
                    flag=1;
                    break;
                }
        }
    }
    if(flag==0){
            printf("the strings are same");
    }else{
            printf("the strings are not same");
    }
}