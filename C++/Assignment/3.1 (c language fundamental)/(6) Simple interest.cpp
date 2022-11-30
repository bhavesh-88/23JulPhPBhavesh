#include<stdio.h>
int main()
{
	int p,r,t;
	float sp;
	
	printf("Simple Interest = (P x R x T)/100\n");
	printf("Principle (P) = ");
	scanf("%d",&p);
	printf("Rate (R) = ");
	scanf("%d",&r);
	printf("Time (T) = ");
	scanf("%d",&t);
	
	sp=(p*r*t)/100.00;
	
	printf("Simple Interesr = %f",sp);
	
    		
 return 0;
}
