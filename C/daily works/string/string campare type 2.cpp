#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30],s2[30];
	int camp;
	
	printf("Enter string 1");
	gets(s1);
	printf("Enter string 2");
	gets(s2);
	camp= strcmp(s1,s2);
	
	if(camp ==0)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
	
	return 0;
}
