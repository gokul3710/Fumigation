#include <stdio.h>
#include <stdlib.h>
void counter(int count,int limit,char name[]);

int main(void){
    int limit;
    char name[100];
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("enter a name");
    scanf("%s",&name);
    int count=1;
    counter(count,limit,name);
    return 0;
}


void counter(int count,int limit,char name[]){
    if(count<=limit){
        printf("%s\n",name);
        count++;
        counter(count,limit,name);
    }
}