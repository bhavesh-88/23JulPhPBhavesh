#include<stdio.h>
int main()
{
	
	int a[5],b[5],c[5];
	int i;
	
	printf("Enter first arrary elements \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("Enter second arrary elements \n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		
	}
		printf(" first arrary  is \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
		
	}
	
	printf("second arrary is \n");

	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
		
	}
    printf("\n")
	
	for(i=0;i<5;i++)
	{
		c[i] = a[i]+b[i];
		
		printf(" third arrary elements at index %d is= %d \n",i,c[i]);	
	}
	
	
	return 0;
}




