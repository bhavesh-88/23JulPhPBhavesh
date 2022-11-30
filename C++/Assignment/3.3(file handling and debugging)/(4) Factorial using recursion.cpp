#include<stdio.h>

int fact(int num);

int main()
{
	int a;
	
	printf("enter a number ;");
	scanf("%d",&a);
	
	printf("factorial of %d is : %d",a,fact(a));
	
	return 0;
}
int fact(int num)
{
	if(num<=1)
	{
		return 1;
	}
	else
		
	return num*fact(num-1);
}

