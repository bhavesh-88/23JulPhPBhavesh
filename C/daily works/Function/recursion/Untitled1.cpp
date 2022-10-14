#include<stdio.h>

int add(int num);

int main()
{
	int a;
	
	printf("enter a number ;");
	scanf("%d",&a);
	
	printf("Sum of natural number  %d is : %d",a,fact(a));
	
	return 0;
}

int add(int num)
{
	if(num<=0)
	{
		return 0;
	}	
	return num+fact(num-1);
}

