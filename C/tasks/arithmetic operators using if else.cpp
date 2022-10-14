#include<stdio.h>

int main()

{
	int choice;
	int No1,No2;
	int ans;
	
	printf("1== sum \n ");
	printf("2== multiplication \n");
	printf("3== division  \n");
	printf("4== divide  \n" );

	
	printf(" Enter your choice \n");
	scanf(" %d", &choice );
	
	printf("Enter No1  \n ");
	scanf(" %d", &No1);
	
	printf("Enter No2 \n");
	scanf(" %d", &No2);
	
	if (choice ==1)
		
	ans = No1+No2;

	if(choice ==2)
		
	ans = No1*No2;

     if(choice == 3)
	
	ans = No1-No2;
	
	else if (choice ==4)
		
	ans = No1/No2;

	else

	
	printf("Invalid choice  \n");
	

	
	printf("Answer is %d ", ans);
	
}

