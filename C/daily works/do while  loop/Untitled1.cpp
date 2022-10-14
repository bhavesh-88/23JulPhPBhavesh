#include<stdio.h>
int main()
{
	// do while loops
	//natural number
	
	int i =1,n;
	
	printf(" Enter any numbers \n");
	scanf("%d",&n);
	
	do
	{	
	printf("%d \n",i);
	i++;
	}
	while(i<=n);
	
	return 0;
	
}
