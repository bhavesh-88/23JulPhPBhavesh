#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter any year ");
	scanf("%d",&year);
	
	if(year%100 == 0)
	{
		if(year%400 == 0)
		{
			printf("year is leapyear ");
		}
		else
		{
			printf("year is not leapyear");
		}
	}
	else
	{
		if(year%4 == 0)
		{
			printf("year is leapyear ");
		}
		else
		{
			printf("year is not leappyear");
		}
	}
	
	return 0;
}



// if (y*400 == 0 || y*4 == 0 && y*100! == 0)
// {
// 	printf(" year is leap year ")
// }
