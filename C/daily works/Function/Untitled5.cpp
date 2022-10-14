#include<stdio.h>
// FUNCTION WITHOUT RETURN TYPE & WITH ARGUMENTS


void sum(float a,float b);

int main()
{
	float x,y;
	printf(" Enter x and y :");
	scanf("%f %f",&x,&y);
	sum (x,y);
	
	
}

void sum(float a,float b)
{
	float s=0;
	s=a+b;
	
	printf("sum = %f",s);
}

