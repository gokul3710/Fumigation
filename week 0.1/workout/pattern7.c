#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int a[10],i,j,count,b[10]={0};
	setbuf(stdout,NULL);
	printf("Enter array elements");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("numbers with count =2\n");
	for(i=0;i<9;i++)
	{
		if(b[i]==0)
		{
			count=1;
			for(j=i+1;j<10;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					b[j]=1;
				}
			}
			if(count==2)
				printf("%d\n",a[i]);
		}
	}
	return EXIT_SUCCESS;
}