#include<stdio.h>
int main()
{
	int no_of_days,year,month;
	
	printf("Enter the no_of_days \n");
	scanf(" %d", &no_of_days);
	
	year = no_of_days/365;
	
	month = (no_of_days - year*365)/30;
	
	   
	printf("year = %d \n",year);
	printf("month = %d \n",month);
	
	return 0;
	
	
	
	
	
	
	
	
	
}
