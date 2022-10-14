#include<stdio.h>
#include<string.h>

int main()
{
	int l1,l2,i;
	char s1[30] = "bhavesh";
	char s2[] = "malviya";
	
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<=l2;i++)
	{
		s1[l1+i] = s2[i];
		
	}
	
	printf("string after cocatanats :%s  \n",s1);		
    puts(s2);
    
	return 0;
}
