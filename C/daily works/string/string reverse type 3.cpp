#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	int i,c,l;
	printf("enter a string");
	gets(s1);
	
	l =strlen(s1);
	
	for(i=0;i<l/2;i++)
	{
		c =s1[i];
		s1[i] = s1[l-1-i];
		s1[l-1-i] = c;
	}
	printf("%s",s1);
	//for(i=0,j=l-1;i<j;i++,j--)
//	{
//		c =s1[i];
///		s1[i] = s1[j];
//		s1[j] = c;
//	)

}
