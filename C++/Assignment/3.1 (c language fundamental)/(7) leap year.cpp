#include<stdio.h>
int main()
{
	int year;

	
	printf("WP for determining the leap year \n");
	
	printf("Enter the year \n");
	scanf("%d",&year);
	

	if(year%4==0)
	{
	  if(year%100==0)
	  {
	  	if(year%400==0)
	  	 {
	  		printf("Leap year");
		 }
		else
		 {
		 	printf("Not leap year");
		 }
			 
	  }
	 else
	  {
		printf("Leap year");
	  }
	}
	else
	{
		printf("Not leap year");
	}

	return 0;	
}
