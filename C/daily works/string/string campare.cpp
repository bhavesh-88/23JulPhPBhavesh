#include<stdio.h>
//#include<string.h>

int main()
{
	char s1[30],s2[30];
	int camp,i,flag =0;
	
	printf("Enter string 1");
	gets(s1);
	printf("Enter string 2");
	gets(s2);
//	camp= strcmp(s1,s2);

    for(i=0;s1[i] !='\0'|| s2[i] !='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag =1;
			break;
		}
	}	
	if(flag ==1)
	{
		printf(" not same");
	}
	else
	{
		printf("same");
	}
	
	return 0;
}
