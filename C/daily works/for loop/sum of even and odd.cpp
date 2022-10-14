#include<stdio.h>

int main()
{
	int i,num,sum = 0,so =0;
	
	printf("Enter Number  \n");
	scanf(" %d",&num);
	
	
	for (i = 1;i<=num ;i++)
	{
		
		if (i%2 == 0)
		{
			sum = sum+i;
		printf("even numbers = %d  \n",i);
		}
		
		else 
		{
		    so = so+i;
		printf("ODD numbers = %d  \n",i);
	    }
	    
    }

    printf("sum of all EVEN numbers  = %d  \n",sum);
	printf("sum of all ODD numbers = %d \n",so);

	return 0;
 	
}  
