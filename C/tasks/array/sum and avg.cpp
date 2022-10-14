#include<stdio.h>
int main()
{
	
	int marks[5];
	int i;
	int sum=0;
	float avg;
	
	printf("Enter the marks of five students ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	
	printf("arrary is \n ");
	
	for(i=0;i<5;i++)
	{
		printf("%d ",marks[i]);
	}
	for(i=0;i<5;i++)
	{
		
		sum = sum+marks[i];
		
	}
	
	avg = sum/5;
	
	printf(" sum is %d \n",sum);
	printf(" avg is %f \n",avg);
	
	return 0;
}
