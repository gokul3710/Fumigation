#include <stdio.h>

int main(void)
{
    int arr[100], check[100], i, j, limit,count;
    printf("Enter the limit");
    scanf("%d", &limit);
    printf("Enter the values");
    for (i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
        check[i] = 0;
    }

    for (i = 0; i < limit - 1; i++)
    {
        count=1;
        if (check[i] == 0)
        {
            for (j = i + 1; j < limit; j++)
            {
                if(arr[i]==arr[j]){
                    count++;
                    check[j]=1;
                }
            }
        }

        if(count==2){
            printf("\n%d",arr[i]);
        }
    }
}