#include<stdio.h>
int main()
{
	// Arrary intialization
	
	int a[5] ;
	int i,j,temp;
	
	
	printf("enter the arrary elements ");
	
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
   	{
   	    for(j=i+1;j<5;j++)
   		{
   			if(a[i]>a[j])   // asending    //if(a[i]<a[j])   decending order  
   			{
   				temp = a[i];
   				a[i] = a[j];
   				a[j] = temp;
   				
			}
		}
	}
    	
	printf("arrary elements ");
	for(i=0;i<5;i++)
	{
		
		printf("%d ",a[i]);
	}	
	
	return 0;
	
	
}
