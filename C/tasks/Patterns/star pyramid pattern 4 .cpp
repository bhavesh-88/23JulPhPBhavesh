#include<stdio.h>
int main()
{
	
	int i,j;
	int k;
	
	for(i=1;i<=9;i++)     // rows
	{   
	    if(i<=5)
		{
                                       
		for(j=1;j<=i;j++)          // left side space          
		{	                                                                    
	      	printf("* ");
		}
		 printf("\n");
	    }
		
		else if(i>5&&i<=9)
     	{
		                            
		for(k=1;k<=2*i-1;k++)     // *, & right side space
		{
		
		  printf("* ");	
		}
		                                    
		printf("\n");
	    }
	}
	
	return 0;
	
}


//         *      
//        *** 
//       ***** 
//      *******
//     *********

