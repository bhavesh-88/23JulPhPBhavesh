#include<stdio.h>
int main()
{
	int age;
	
    printf(" HELLO WORLD \n");
	
	for(int i=1;i<=10;i++)
	{
		printf("%d enter your age \n",i);
		scanf("%d",&age);
		
		
		if(age>10)
		{
		
		break;
	    }   
	}
	
	return 0;
}
