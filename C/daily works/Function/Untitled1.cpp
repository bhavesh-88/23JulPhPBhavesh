#include<stdio.h>

// no arguments and without return vale
void sum();    // function declaration

int main()     // function calling
{
	sum();
	return 9;
}
void sum()    // funtion defination
{
	int a,b,sum=0;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	sum = a+b;
	printf("SUM = %d",sum);	
}
