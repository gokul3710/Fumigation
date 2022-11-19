#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <=2*i*i; j++)
        {
            printf("* ");
            if(j%(2*i)==0){
                printf("\n");
            }
        }
        if(i!= 3){
            for (j = 1; j <= 3; j++)
        {
            printf("*\n");
        }
        }
        
    }
}