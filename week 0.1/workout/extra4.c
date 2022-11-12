#include <stdio.h>
#include <string.h>

int main()
{
    char Str1[100], Str2[100],Str3[100];
    int i, j,a;

    printf("\n Please Enter the First String :  ");
    scanf("%s",Str1);

    printf("\n Please Enter the Second :  ");
    scanf("%s",Str2);

    for (i = 0; Str1[i] != '\0'; i++);


    for (j = 0; Str2[j] != '\0'; j++){
        Str1[i] = Str2[j];
        i++;
    }

    Str1[i] = '\0';

    printf("\n After the Concatenate = %s", Str1);

    for (i = 0; Str1[i] != '\0'; i++);
    for (j = 0; Str1[j] != '\0'; j++){
        Str3[j]=Str1[i-j-1];
    }

    printf("\n After reversing = %s", Str3);

    return 0;
}