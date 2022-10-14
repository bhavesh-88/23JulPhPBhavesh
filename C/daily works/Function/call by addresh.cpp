#include<stdio.h>

void swap(int x,int y);

int main()
{
    int a,b;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);                   // call by addresh
	printf("A = %d B = %d",a,b);
	return 0;	
}

void swap(int x,int y)
{
	int temp;
	temp =x;
	x = y;
	y = temp;
	printf("X = %d Y = %d",x,y);
}
