/*
 * C program to find the area of a triangle, given three sides
 */
#include <stdio.h>
 
int main()
{
    int h, a, b;
 
    printf("Enter the values of base  and height \n");
    scanf("%d %d", &b, &h);
    a = 0.5*b*h;
    printf("Area of a triangle = %d \n",a);
}
