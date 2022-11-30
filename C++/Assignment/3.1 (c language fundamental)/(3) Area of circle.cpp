#include<stdio.h>
int main()
{
	float r;
	float area;
	
	printf("WP for finding the area of circle \n");

	printf("radius (in m) = ");
	scanf("%f",&r);
	
	area = 3.14*r*r;
	
	printf("Area of circle = %f meter square",area);
	
	return 0;
}
