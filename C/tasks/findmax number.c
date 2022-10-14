#include<stdio.h>

int main()

{
	int No1,No2;
	 
	 printf("Enter No1: ");
	 scanf("%d",&No1);
	 printf("Enter No2: ");
	 scanf("%d",&No2);
	 if(No1>No2)
	 {
	 	printf("%d is max",No1);
	 }
	 else if(No2>No1)
	 {
	 	printf("%d is max",No2);
	 }
	 else
	 {
	 	printf("both are eqaul");
	 }
}
