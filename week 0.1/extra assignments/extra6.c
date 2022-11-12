#include <stdio.h>

int main(void){
    int limit,i,j;
    char movies[100][100],temp[100][100];
    printf("Enter a limit");
    scanf("%d",&limit);
    printf("Enter %d movies\n",limit);
    for(i=0;i<limit;i++){
            scanf("%s",movies[i]);
    }

    for(i=0;i<limit-1;i++){
        if(movies[i]>movies[i+1]){
            temp[0][0]=movies[i][0];
            movies[i][0]=movies[i+1][0];
            movies[i+1][0]=temp[0][0];
        }
    }

    for(i=0;i<limit;i++){
            printf("%s\n",movies[i]);
    }
}