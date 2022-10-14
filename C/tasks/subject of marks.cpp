#include<stdio.h>
int main()
{
	int eng,maths,com,sci,chem;
	int total,avg;
	
	printf("Enter marks of 5 subject....");
	scanf("%d%d%d%d%d",&eng,&maths,&com,&sci,&chem);
	
	total =eng+maths+com+sci+chem;
	avg = total/5;
	
	printf("TOTAL MARKS is %d \n",total);
	printf("AVG is %d",avg);
	
	return 0;
	
}
