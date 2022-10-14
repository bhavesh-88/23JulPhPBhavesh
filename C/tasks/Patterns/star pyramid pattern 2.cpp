#include<stdio.h>
int main()
{
	
	int i,j;
	int k;
	
	for(i=1;i<=5;i++)     // rows
	{                                          
		for(j=5;j>i;j--)          // left side space          
		{	                                                                    
	      	printf(" ");
		}
		                            
		for(k=1;k<=2*i-1;k++)     // *, & right side space
		{
		  printf("* ");	
		}
		                                    
		printf("\n");
	}
	
	return 0;
	
}


//         *      
//        *** 
//       ***** 
//      *******
//     *********

