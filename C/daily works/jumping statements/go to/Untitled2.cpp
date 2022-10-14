#include<stdio.h>
int main()
{	
	
	label:   		
	   printf("we are inside label \n");
	   goto end;
	   
	   printf("hello world \n");

	 //  scanf("%d",&num);
	   
	   goto label;	
	
	end:
	
	    printf(" WE are at end");
	return 0;
}
