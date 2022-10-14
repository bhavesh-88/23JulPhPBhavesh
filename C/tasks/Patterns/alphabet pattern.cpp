#include<stdio.h>
int main()
{
	
	int i,j;
	char k ='A',a;
	
	for(i=1;i<=5;i++)
	{                                          
		for(j=1;j<=5;j++)                  
		{	                                       
			        
		  	a=k++;	                        
	      	printf(" %c ",a);
			                
		}                            
		                                    
		printf("\n");
	}
	
	return 0;
	
}

//A B C D E 
//F G H I J
//K L M N O
//P Q R S T
//U V W X Y

/*
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
*/

/*
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
*/

//A
//A B
//A B C 
//A B C D
//A B C D E
