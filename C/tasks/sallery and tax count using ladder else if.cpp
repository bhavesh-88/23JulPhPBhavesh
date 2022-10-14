#include<stdio.h>
int main()
{
	int sal;
	float tax;
	
	printf("Enter salery ...");
	scanf("%d",&sal);
	
	if(sal<10000)
	{
	      printf(" NO TAX ");	
	}
	else if(sal>10000 && sal<30000)
	{
	    tax = (0.10*sal);
	    printf("TAX is %f",tax);
	}
	else if(sal>30000 && sal<60000)
	{
        tax = (0.20*sal);
	    printf("TAX is %f",tax);
	}
	else if(sal>60000 && sal<90000)
	{
		tax = (0.25*sal);
	    printf("TAX is %f",tax);
	}
	else
	{
		tax = (0.30*sal);
		printf("TAX is %f",tax);
	}
	
	return 0;
	
}
