#include<stdio.h>
int main()
{
	int days;
	float months;
	float years;
	
	printf("WP to convert the number of days into months and year \n");

	printf("Enter the Number of days : ");
	scanf("%d",&days);
	
	months = days/30.0;
	
	printf("Months = %f \n",months);
	
	years = days/365.0;
	
	printf("Years = %d \n",years);
	
	return 0;
	
	
}
