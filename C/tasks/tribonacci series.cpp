#include<stdio.h>
int main()
{
	// tribonacci series 0 1 2 3 6 11 20..... n
	int a=0,b=1,c=2,d,n,i;
	printf("Enter number of term ....");
	scanf("%d",&n);	
	for(i=0;i<n;++i)
	{
		printf("%d  ",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	
	return 0;
}
