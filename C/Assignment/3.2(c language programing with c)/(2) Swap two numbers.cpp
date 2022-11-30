#include<stdio.h>
int main()
{
    int a=56,b=65;
    
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    
    a=a+b;
	b=a-b;
	a=a-b;
	 
    printf("%d %d",a,b);
    		
 return 0;
}

