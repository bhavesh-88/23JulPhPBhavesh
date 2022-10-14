#include<stdio.h>
int main()
{
	char str[20];
	int i,len =0;
	int space;
	
	printf("Enter name");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
		if(str[i]==' ')
		{
			space++;
		}
		else
		{
			printf("invalid");
		}
	}
	printf("lenght is %d",len);
	printf("space is %d",space);
}
