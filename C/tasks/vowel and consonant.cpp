#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character ");
	scanf("%c",&ch);
	
	if(ch == 'a'|| ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'|| ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
	{
		printf("character is vowel ");
	}
	else
	{
		printf("character is consonant");
	}
	return 0;
}
