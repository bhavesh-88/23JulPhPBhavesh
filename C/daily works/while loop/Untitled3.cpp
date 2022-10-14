#include<stdio.h>
int main()
{
	int i=1,sum=0,num;
	
	while(i<=10)
	{
		printf(" Enter any number");
		scanf(" %d",&num);
		
		sum+= num;
		i++;
	}
	
	printf("ADDITION : %d",sum);
	
	return 0;
}
