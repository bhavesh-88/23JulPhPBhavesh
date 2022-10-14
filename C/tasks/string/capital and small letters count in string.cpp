#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,cap=0,small=0,digit =0;
	
	printf("Enter name");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			cap++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			small++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
	}
	
	printf("capital letter is %d",cap);
	printf("small letter is is %d",small);
	printf("total digit is is %d",digit);
	
	return 0;
}
