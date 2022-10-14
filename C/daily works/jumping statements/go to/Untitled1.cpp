#include<stdio.h>
int main()
{
	
	int i,num;
	
	here:
    		
	   printf("Enter a number \n");
	   scanf("%d",&num);
	   
	   if(num<5)
	   {
	   	goto here;
		    
		}	
	
	return 0;
	
}
