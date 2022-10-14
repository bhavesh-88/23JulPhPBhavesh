#include<stdio.h>
int main()
{
	int a[5];
	int i;
	
	printf(" Enter the arrary elements ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n arrary alements at index %d is %d",i,a[i]);
		
	}
      printf("\n");
	
	for(i=4;i>=0;i--)
	{
		
		printf("\n arrary alements at index %d is %d",i,a[i]);
	}
	
	return 0;
}



