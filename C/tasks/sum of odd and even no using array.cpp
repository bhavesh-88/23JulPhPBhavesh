#include<stdio.h>
int main()
{
	int a[10],i,n,even_sum =0,odd_sum =0;
	
	printf("How many elements ?");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter elements :");
		scanf("%d",&a[i]);
		
	}
	
	printf("Elements of arrary are: %a[i] \n");
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2 ==0)
		{
			even_sum = even_sum+a[i];
		}
		else
		{
		  odd_sum = odd_sum+a[i];
		}
	}
	
	printf("Sum of even no is :%d \n",even_sum);
	printf("Sum of odd no is :%d",odd_sum);
	
	return 0;
}
