#include<stdio.h>
int main()
{
	
	int a[5];
	int i;
	int sum=0;
	
	printf("Enter the arrary elements ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("arrary is \n ");
	
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		
		sum = sum+a[i];
		
	}
	
	printf(" sum is %d \n",sum);
	
	
	return 0;
	
	
}
