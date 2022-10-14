#include<stdio.h>


// FUNCTION WITH RETURN TYPE & WITHOUT ARGUMENTS
int add();

int main()
{
	printf("ADDITION =%d",add());
}

int add()
{
	int a,b;
	
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	
	return a+b;
}



