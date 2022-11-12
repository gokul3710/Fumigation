#include <stdio.h>
#include <stdlib.h>

void stringlength()
{
	char str[20];
	int len;
	setbuf(stdout,NULL);
	printf("Enter your string : ");
	gets(str);
	for(len=0;str[len]!='\0';len++);
	printf("\nLength of string : %d",len);
}

void stringconcatenation()
{
	char str1[40],str2[20];
	int len1,len2,j,i=0;
	setbuf(stdout,NULL);
	printf("Enter two strings :");
	gets(str1);
	gets(str2);
	for(len1=0;str1[len1]!='\0';len1++);
	for(len2=0;str2[len2]!='\0';len2++);
	for(j=len1; j<len2;j++)
		str1[j]=str2[i++];
	printf("\nConcatenated string : ");
	puts(str1);
}

void stringreverse()
{
	char str[20];
	int len,i;
	setbuf(stdout,NULL);
	printf("Enter your string : ");
	gets(str);
	for(len=0;str[len]!='\0';len++);
	printf("\nReversed string : ");
	for(i=len=1; i>=0; i++)
		printf("%c",str[i]);
}
int main(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int ch;
	char ch1;
	setbuf(stdout,NULL);
	do
	{
		printf("*MENU*\n");
		printf("1.String length\n");
		printf("2.String concatenation\n");
		printf("3.String reverse\n");
		printf("4.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:stringlength();
					break;
			case 2:stringconcatenation();
					break;
			case 3:stringreverse();
					break;
			case 4:exit(0);
					break;
			default:printf("Invalid choise..!");
		}
	printf("Do  you want to continue..?(y/n) : ");
	scanf("%c",&ch1);
	}while(ch1=='y'||ch1=='Y');
	return EXIT_SUCCESS;
}