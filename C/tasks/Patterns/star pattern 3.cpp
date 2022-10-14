#include<stdio.h>
int main()
{

	int i,j;
	int k;
	
	for(i=1;i<=5;i++)     // rows
	{                                          
		for(j=1;j<5;j++)          // space          
		{	                                                                    
	      	printf(" ");
		}
		                            
		for(k=1;k<=i;k++)     //columns
		{
		  printf("*");	
		}
		                                    
		printf("\n");
	}
	
	return 0;
	
}

//for(j=1;j<i;j++)

//for(k=1;k<=5;k++)

// * * * * *      
//   * * * *  
//     * * *  
//       * * 
//         *


// for(j=1;j<=i;j++)

// 	       *  
//       * * 
//     * * *
//   * * * *
// * * * * * 
