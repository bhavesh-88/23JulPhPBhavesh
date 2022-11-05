#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b; 
	
	printf("A=%d,B=%d",a,b);
}

/*
int main()
{
	// swapping
	int a = 12,b = 5;
	int temp = 0;
	
	printf("value before swap \n");
	printf("A = %d \n",a);
	printf("B = %d ",b);
	
	temp =a;
	a=b;
	b= temp;
	
	printf("value before swap \n");
	printf("A = %d \n",a);
	printf("B = %d",b);	
}

*/
