#include<string.h>
#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	
	printf("Enter a string to check palindrome :");
	gets(str1);
	
	strcpy(str2,str1);
	
	strrev(str2);
	
	if(strcmp(str1,str2) ==0)
	{
		printf("string is palindrome ");
	}
	else
	{
		printf("string is not palindrome");
	}
	
	return 0;
}
