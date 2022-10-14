#include<stdio.h>
//#include<string.h>

int main()
{
	char name[30];
	int i=0,len=0;
	printf("Enter name ");
	gets(name);
	while(name[i] !='\0')
	{
		len++;
		i++;
	}
	puts(name);
	printf("strinameng lenght is %d",len);
	return 0;
} 
