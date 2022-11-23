#include <stdio.h>

int main(void){
    int i,j,arr[100],limit,value,pos;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    printf("Enter arry values\n");
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted\n");
    scanf("%d",&value);
    printf("Enter the position\n");
    scanf("%d",&pos);

    for(j=limit;j>=pos;j--){
        arr[j]=arr[j-1];
    }
      
    arr[pos-1]=value;
    
    printf("new array is \n"); 
    for(i=0;i<limit;i++){
        printf("%d",arr[i]);
    }
}