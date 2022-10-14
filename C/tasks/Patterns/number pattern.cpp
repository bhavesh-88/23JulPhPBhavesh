#include<stdio.h>
int main()
{
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{                                          
		for(j=1;j<=5;j++)                  
		{	                                       
		    if(j%2==0)
			{                                
	      	printf(" 0 ");
			}                               
			else                              // 1 0 1 0 1
			{                                 // 1 0 1 0 1
			printf(" 1 ");                   //  1 0 1 0 1
			}                               //   1 0 1 0 1
		}                                   //   1 0 1 0 1
		                                    
		printf("\n");
	}
	
	return 0;
	
}
