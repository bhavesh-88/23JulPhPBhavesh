#include<stdio.h>
int main()
{
	int age,salary;
	int increment;
	
	printf(" Enter age & salary \n");
	scanf("%d %d", &age,&salary);
	
	if (age>50)
{
	      if (salary<50000)
	    {
	        increment = salary+10000;
		}
	     else 
	     {
	     	increment = salary+5000;
		 }
	}	
	
	else
{
	
	 increment = salary+3000;
	
	}	
	
	
	printf(" increment is  %d,,,  \n",increment);
	
	
	
	
return 0;	
	
}
