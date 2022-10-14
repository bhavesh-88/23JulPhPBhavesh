#include<stdio.h>
int main()
{
	char str[20];
	int i,len =0;
	
	printf("Enter name");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("length of string :%d",len);
	
	return 0;
}
