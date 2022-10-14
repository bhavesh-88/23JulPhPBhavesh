#include<stdio.h>
int main()
{
	char name[30] = "bhavesh malviya";
	printf("%s \n",name);
	
	char fname[30],lname[30];
	printf("Enter name ,");
	
	//gets(fname);
	//gets(lname);
	scanf("%s %s",&fname,&lname);
	
	printf("%s %s",fname,lname);
}
