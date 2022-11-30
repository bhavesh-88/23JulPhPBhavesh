#include<stdio.h>
int main()
{
	int i,n,e=0,o=0,esum,osum;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter number 10 times : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			e++;
			esum+=n;
			
		}
		else
		{
			o++;
			osum+=n;
		}	
	}
	printf("Total even numbers are : %d \n",e);
	printf("Total Odd numbers are : %d\n",o);
	printf("Total sum of even numbers are : %d \n",esum);
	printf("Total sum of Odd numbers are : %d \n",osum);
	
 return 0;
}
