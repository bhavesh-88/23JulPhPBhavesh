#include<stdio.h>

int main()

{
	int age;
	
	printf("enter your age  \n");
	scanf("%d", &age);
	printf(" you have entered %d is your age \n", age);
	
	if (age>18)
{   
		
	printf("you can vote \n");
}
//	if (age <=30)
//{
		
//	printf("you are between 18 to 30 and you can vote for younger  \n");
//}
	else if (age>=10)
{
	 	 
      printf("you are between 10 to 18 and you can vote for teenager \n");
}
	
	else 
{
		
	printf(" you cannot vote");
}
	return 0;
	
	
	
	
	
	
	
}
