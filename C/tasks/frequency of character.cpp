#include<stdio.h>
int main()
{
	char str[100],n;
	int count =0,i;
	
	printf("Enter a string :");
	gets(str);
	
	
	for(n='a';n<='z';n++)
	{
		count=0;
	    for(i=0;str[i] !='\0';i++)
	    {  
			if(n==str[i])
			{
			count++;
			}		
	    }
	    if(count>0)
	    {
	    printf("%c found in %d times \n",n,count);
	    }
    }
	
	return 0;
	
}
