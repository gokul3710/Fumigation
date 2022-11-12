#include <stdio.h>
#include <string.h>

int STRINGLENGTH(char Str1[]);
void STRINGCONCATENATION(char Str1[],int length);
void STRINGREVERSE(char Str1[],int length);

int main()
{
    char Str1[100], Str2[100],Str3[100];
    int i, j,a,length;

    printf("Please Enter a String :  ");
    scanf("%s",Str1);

    length = STRINGLENGTH(Str1);
    

    

    STRINGCONCATENATION(Str1,length);

    

    STRINGREVERSE(Str1,length);
    
    

    return 0;
}

int STRINGLENGTH(char Str1[]){
    int i;
    for (i = 0; Str1[i] != '\0'; i++);
    printf("Length of the string is : %d",i);
    return i;
}

void STRINGCONCATENATION(char Str1[],int length){
    int j;
    char Str2[100];
    printf("\nPlease Enter the Second String:  ");
    scanf("%s",Str2);
    for (j = 0; Str2[j] != '\0'; j++){
        Str1[length] = Str2[j];
        length++;
    }
    Str1[length] = '\0';
    printf("\nAfter the Concatenate = %s", Str1);
}

void STRINGREVERSE(char Str1[],int length){
    int j;
    char Str3[100];
    for (j = 0; Str1[j] != '\0'; j++){
        Str3[j]=Str1[length-j-1];
    }
    printf("\nAfter reversing = %s", Str3);
}