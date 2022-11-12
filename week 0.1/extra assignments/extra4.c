#include <stdio.h>
#include <string.h>

void STRINGLENGTH(char Str1[]);
void STRINGCONCATENATION(char Str1[]);
void STRINGREVERSE(char Str1[]);
void CHOICE(int Str1[]);

int main()
{
    char Str1[100], Str2[100],Str3[100];
    int i, j;
    printf("Please Enter a String :  ");
    scanf("%s",Str1);
    CHOICE(Str1);
    return 0;
}

void STRINGLENGTH(char Str1[]){
    int length;
    for (length = 0; Str1[length] != '\0'; length++);
    printf("Length of the string is : %d",length);
}

void STRINGCONCATENATION(char Str1[]){
    int j,length;
    char Str2[100];
    for (length = 0; Str1[length] != '\0'; length++);
    printf("Please Enter the Second String:  ");
    scanf("%s",Str2);
    for (j = 0; Str2[j] != '\0'; j++){
        Str1[length] = Str2[j];
        length++;
    }
    Str1[length] = '\0';
    printf("After the Concatenate = %s", Str1);
}

void STRINGREVERSE(char Str1[]){
    int j,length;
    for (length = 0; Str1[length] != '\0'; length++);
    char Str3[100];
    for (j = 0; Str1[j] != '\0'; j++){
        Str3[j]=Str1[length-j-1];
    }
    Str1[length] = '\0';
    printf("After reversing = %s", Str3);
}

void CHOICE(int Str1[]){
    int choice,count=0;
    printf("\n");
    printf("Choose an Operation\n1. String Length\n2. String Concate\n3. String Reverse\n4. Exit");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            STRINGLENGTH(Str1);
            break;
        case 2:
            STRINGCONCATENATION(Str1);
            break;
        case 3:
            STRINGREVERSE(Str1);
            break;
        case 4:
            count++;

    }
    if(count == 0){
    CHOICE(Str1);
    }
    
}