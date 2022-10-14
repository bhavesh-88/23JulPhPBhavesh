#include<stdio.h>
#include<string.h>

int main()
{
	char s1[30] = "bhavesh";
	char s2[] = "malviya";
	
//	strcat(s1,s2);
//	printf("string after concatenate : %s\n",s1);
//	gets(s2);
    printf("%s",strcat(s1,s2));		

	return 0;
}
