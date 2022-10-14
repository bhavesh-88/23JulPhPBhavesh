#include<stdio.h>
// FUNCTION WITH RETURN TYPE & WITH ARGUMENTS


int sum(int a,int b);

int main()
{
	int x,y,c;
	printf(" Enter x and y :");
	scanf("%d %d",&x,&y);
  	 c =sum (x,y);   // ca//ing
	printf("sum = %d",c);
	
}

int sum(int a,int b)
{
	//float 	s=0;
	//s=a+b;
	
//	printf("sum = %d",s);
	return a+b; 
}

