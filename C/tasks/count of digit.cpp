#include<stdio.h>
int main()
{
	int n,count=0,r;
	
	printf("Enter any number ");
	scanf("%d",&n);
	
	while(n>0)
	{
		count++;
		n = n/10;
	}
	printf("sum of digit %d",count);
	return 0;
}
