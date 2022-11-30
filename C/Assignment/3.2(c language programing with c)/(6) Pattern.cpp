#include<stdio.h>
int main()
{
	int i,j,k=0;
	
	for(i=1;i<=5;i++)
	{                                          
		for(j=1;j<=i;j++)                  
		{	                                       
			k++;		                        
	      	printf("%d ",k);
		}                            	                                    
		printf("\n");
	}
	return 0;	
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{                                          
		for(j=1;j<=i;j++)                  
		{	                                       
		    if(j%2==0)
			{                                
	      	printf(" 0 ");
			}                               
			else                              // 1 
			{                                 // 1 0 
			printf(" 1 ");                   //  1 0 1 
			}                               //   1 0 1 0 
		}                                   //   1 0 1 0 1
		                                    
		printf("\n");
	}
	return 0;	
}

#include<stdio.h>
int main()
{
	char i,j,k='A';
	char a;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				a = k++;
				printf(" %c ",a);
			}
		}
		printf("\n");
	}
	return 0;
}
//A  
//B C 
//D E F
//G H I J
//K L M N o

#include<stdio.h>
int main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}

//A
//A B
//A B C 
//A B C D
//A B C D E

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
		  printf("*");	
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

