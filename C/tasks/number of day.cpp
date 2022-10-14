#include<stdio.h>
int main()
{
	int no_of_days,year,month;
   // int week,days;

	printf("Enter the no_of_days \n");
	scanf(" %d", &no_of_days);
	
	year = no_of_days/365;
	
	month = no_of_days/30;
	
//	week = (no_of_days - (year*365) - (month*30))/7;
	
//	days = (no_of_days - (year*365) - (month*30) - (week*7));
	   
	printf("year = %d \n",year);
	printf("month = %d \n",month);
//	printf("week = %d \n", week);
//	printf("daus = %d \n" ,days);
	
	return 0;
	
	
	
	
	
	
	
	
	
}
