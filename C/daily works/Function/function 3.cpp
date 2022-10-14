#include<stdio.h>

// FUNCTION WITH RETURN TYPE & WITH ARGUMENTS
// function declaration
int sum(int num1, int num2);


int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	
	printf("ADDITION = %d",sum(a,b));
	
}

// function defination
int sum(int num1, int num2)
{
	return num1+num2;
}
