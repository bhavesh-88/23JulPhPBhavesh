#include<stdio.h>
int main()
{
	// char srting name[size]
	// char str[6] = {'h','e','l','l','o',.....'\0}
	char str[10] = {'h','e','l','l','o','\0'};
	
	int i;
	for(int i=0;i<6;i++)
	{
		printf("%s",str[i]);
	}
	return 0;
}

