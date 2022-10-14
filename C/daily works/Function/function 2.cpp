#include<stdio.h>
// FUNCTION WITHOUT RETURN TYPE & WITH ARGUMENTS

// function declaration and defination
void display (int num1,int num2)    // there are formal perameters
{

	printf("ADDITION = %d",num1+num2);
}

int main()
{
	int a,b;
	printf("Enter two number ");
	scanf("%d%d",&a,&b); 
	display(a,b);           // there are actual perameters
	
	return 0; 
}
