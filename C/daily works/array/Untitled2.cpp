#include<stdio.h>
int main()
{
	// Arrary intialization
	
	int a[100] ;
	int i;
	
	
	printf("enter the elements of arrary");
	
	for(i=0;i<100;i++)
	{
		
		scanf("%d",&a[i]);
		
		if(i<30)
		{
			a[i] =1;
		}
		else
		{
			a[i] = 0;	
		}	
	}
	return 0;	
}
