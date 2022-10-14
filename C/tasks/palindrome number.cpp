#include<stdio.h>
int main()
{
	int n,c,sum=0,r;
	printf("Enter a number");
	scanf("%d",&n);
	
	c=n;
	while(n>0)
	{
		r=n%10;
		sum=r+(sum*10);
		n=n/10;
	}
	if(c==sum)
	{
		printf("number is palindrome numbere ");
	}
	else
	{
		printf("number is not palindrome number");
	}
	
	return 0;
}
