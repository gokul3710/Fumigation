#include <stdio.h>

int main(void)
{
    int i,j,n=3,count=0;
    int arr[50];
    for(i=1;i<=50;i++){
        arr[i-1]=5*i;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*2;j++)
        {
            printf("%d ",arr[count]);
            count++;
            if(j%(2*i)==0)
            {
                printf("\n");
            }
        }
        if(i==n)
        break;
        for(j=1;j<=3*i;j++)
        {
            printf("%d \n",arr[count]);
            count++;
        }
    }
}