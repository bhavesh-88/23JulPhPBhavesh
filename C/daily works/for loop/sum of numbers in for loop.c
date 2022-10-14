#include<stdio.h>
int main()
{
	// input = 10
	// out put 1+2+3+4+5+6+7+8+9+10 = 55
	int i,num,sum = 0;
	
	printf("Enter Number  \n");
	scanf(" %d",&num);
	
	
	for (i = 1;i<=num;++i)
	{
		
		sum = sum+i;
		printf("%d \n",i);
	//	printf(" Sum of  natural numbers = %d  \n",sum);
	}
	
		printf(" Sum of natural numbers = %d  \n",sum);
	
	return 0;
	
	
	
	
}
