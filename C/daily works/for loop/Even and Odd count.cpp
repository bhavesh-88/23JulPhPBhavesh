#include<stdio.h>
int main()
{
	
	int i,num,e_count = 0,o_count = 0,e_sum=0,o_sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf(" Enter number ");
		scanf("%d",&num);
	
		if(num%2==0)
		{
			e_count++;
			e_sum=e_sum+num;
	  //   printf("even numbers is: %d \n",num);			
		}
		else
		{
			o_count++;
			o_sum+=num;
		}	
	}
	
	
	printf("Total even numbers = %d \n",e_count);
	printf("Total odd numbers = %d \n",o_count);
	printf("ADDITION OF EVEN NUMBERS = %d \n",e_sum);
	printf("ADDITION OF ODD NUMBERS = %d \n",o_sum);
	
	return 0;
}
