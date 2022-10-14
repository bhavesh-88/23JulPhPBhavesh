#include<stdio.h>

int fun(int x,int y);    // function declaration

int main()   
{
	int x=5,y=10;
	printf("inside main(calling function)\n");
	
	
	printf("X = %d Y = %d \n",x,y);
	fun(x,y);  //function calling
		
}

int fun(int x,int y)     // funtion defination 
{
	x = 10;
	y = 5;
	printf("insude fun(calling function)");
	
	printf("X = %d Y = %d",x,y);
}

