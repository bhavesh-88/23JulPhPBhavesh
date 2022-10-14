#include<stdio.h>
int main()
{
	int num;    
	
	for(int i=1;i<=6;i++)
	{
		printf("%d \n",i);
		
		for(int j=1;j<=6;j++)
		{
	     printf(" enter the number: enter 0 to exit \n");
	      scanf(" %d ",&num);
	      if(num==0)
	      {
	      	goto end;
		  }
	    }
	}
	end:
	return 0;
	
}
