#include<stdio.h>
int main()
{
	int a[9];
	int i,num,even_sum =0,odd_sum =0;
	
	printf("how many elements ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("%d Enter elements  ",i);
		scanf("%d",&a[i]);		
	}
	
	printf(" elements of arrary are : \n");
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
				
	}
	
	for(i=0;i<num;i++)
	{
		
	 if(a[i]%2 == 0)
		{
		
		even_sum = even_sum+a[i];
	   }
	else
	  {
			
		odd_sum = odd_sum+a[i];
	  }
	}
	
	printf(" Sum of even num = %d \n",even_sum);
	printf(" Sum of 0dd num = %d \n",odd_sum);
	
	return 0;
	
}
