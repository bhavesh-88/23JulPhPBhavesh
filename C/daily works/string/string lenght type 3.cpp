#include<stdio.h>
#include<string.h>

int main()
{
	char name[30];
	int i;
	printf("Enter name ");
	gets(name);
	puts(name);
	printf("string lenght is %d",strlen(name));
	return 0;
}
