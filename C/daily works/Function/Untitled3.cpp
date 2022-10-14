#include<stdio.h>
#include<stdio.h>


// FUNCTION WITH RETURN TYPE & WITHOUT ARGUMENTS
float add();

int main()
{
	float sum = add();
	printf("ADDITION =%d",sum);
}

float add()
{
	int a = 10.50,b=10.50;
	
	return a+b;
}



