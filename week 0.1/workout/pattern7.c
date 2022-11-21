#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],i,j,count,b[10]={0},limit,rep;
	printf("Enter the limit of array");
	scanf("%d",&limit);
	printf("Enter array elements\n");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Printf numbers repeating exactly :  \n");
	scanf("%d",&rep);
	main(1)
	int main(int a){
		
	}
	printf("numbers with count %d is : \n",rep);
	for(i=0;i<limit;i++)
	{
		if(b[i]==0)
		{
			count=1;
			for(j=i+1;j<limit;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					b[j]=-1;
				}
			}
			if(count==rep)
				printf("%d\n",a[i]);
		}
	}
	return EXIT_SUCCESS;
}