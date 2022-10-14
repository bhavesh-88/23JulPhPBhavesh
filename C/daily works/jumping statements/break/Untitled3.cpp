#include<stdio.h>
int main()
{
	
	int i,a,sum = 0;
	
	for(i=1;i<=5;i++)
	{
		printf(" Enter a elements");
		scanf(" %d",&a);		
		
		if(a<0)
		{
		break;
	    }
	    
	    sum =sum+a;
	    printf("%d \n",sum);
	}
	
	return 0;
}
