#include<stdio.h>

int add(int a ,int b);
int main()
{
	// arrary and function
	
	int a[5] ={12,23,34,56,52};
	printf("ADDITIon = %d",add(a[2],a[3]));
	return 0;	
}

int add(int a ,int b)
{
	return a+b;
		
}

/*
int add(int num[]);

int main()
{
	// arrary and function
	
	int a[5] ={12,23,34,56,52};
	printf("ADDITIon = %d",add(a));
	   
	return 0;	

}
int add(int num[])
{
	int i,sum =0;
	for(i-0;i<5;i++)
	{
	sum =sum+num[i];
			
	}
	return sum;
}
*/
