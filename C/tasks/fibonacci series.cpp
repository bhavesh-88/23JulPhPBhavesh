#include<stdio.h>
int main()
{
	// fibonacci series 0 1 1 2 3 5 8 13....... n
	
	int n,i,a=0,b=1,c;
	printf("Enter number of term :");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{	
		printf("%d ",a);
		c=a+b;
        a=b;
		b=c;
	}
	return 0;
}
