

#include<stdio.h>

void add(int a,int b);

void sub(int a,int b);

void multi(int a,int b);

void div(int a,int b);

 /*void add(int a,int b);
{
	int total;
	total = a+b;
	printf("ADDITION OF %d and %d is = %d \n",a,b,total);
}
*/
/*void sub(int a,int b);
{
	int total;
	total = a-b;
	printf("SUBSTRACTION OF %d and %d is = %d \n",a,b,total);
}*/

/*void multi(int a,int b);
{
	int total;
	total = a*B;
	printf("MULTIPLICATION OF %d and %d is = %d \n",a,b,total);
	
}*/

/*void div(int a,int b);
{
	int total;
	total = b/a;
	printf("DIVISION OF %d and %d is = %d \n",a,b,total);
	
}*/

int main()
{
	int ch;
	
	repeat:
	printf("Enter 1 for ADDITION \n");
	printf("Enter 2 for SUBTRACTION \n");
	printf("Enter 3 for MULTIPLICATION \n");
	printf("Enter 4 for DIVIDION \n");
	printf("Enter 5 for EXIT \n");
	scanf("%d",&ch);
	
	if(ch == 1)
	{
		int num1,num2;
		printf("Enter two numbers :");
		scanf("%d %d",&num1,&num2);
		add(num1,num2);		
		goto repeat;
	}
	
	else if(ch == 2)
	{
		int num1,num2;
		printf("Enter two numbers :");
		scanf("%d %d",&num1,&num2);
		sub(num1,num2);
		goto repeat;
	}
	
	else if(ch == 3)
	{
		int num1,num2;
		printf("Enter two numbers :");
		scanf("%d %d",&num1,&num2);
		multi(num1,num2);
		goto repeat;		
	}
		
	else if(ch == 4)
	{
		int num1,num2;
		printf("Enter two numbers :");
		scanf("%d %d",&num1,&num2);
		div(num1,num2);
		goto repeat;
	}
		
	else if(ch == 5)
	{
		printf("THANKS FOR USING CALCULATORE :");
	}
		
	else
	{
		printf("INVALID INPUT");
	}
	
	return 0;
	
}

void add(int a,int b)
{
	int total;
	total = a+b;
	printf("ADDITION OF %d and %d is = %d \n",a,b,total);
}

void sub(int a,int b)
{
	int total
	;
	total = a-b;
	printf("SUBSTRACTION OF %d and %d is = %d \n",a,b,total);
}

void multi(int a,int b)
{
	int total;
	total = a*b;
	printf("MULTIPLICATION OF %d and %d is = %d \n",a,b,total);
	
}

void div(int a,int b)
{
	int total;
	total = b/a;
	printf("DIVISION OF %d and %d is = %d \n",a,b,total);
	
}

 
