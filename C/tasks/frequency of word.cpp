#include<stdio.h>
int main()
{
	char str[100],n;
	int count =0,i;
	
	printf("Enter a string :");
	gets(str);
	
	printf("Enter the character which you want to count \n");
	scanf("%c",&n);

	
	for(i=0;str[i] !='\0';i++)
	{
			if(str[i]==n)
			{
			count++;
			}		
	}
	
	printf("%c found in %d times \n",n,count);
	
	return 0;
	
}
