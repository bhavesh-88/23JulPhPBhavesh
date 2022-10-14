#inc
lude<stdio.h>

int main()
{
	char str[20];
	int i,v=0,c=0,len=0;
	
	printf("Enter name :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
		
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U')
		{
			v++;
		}
		else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			c++;
		}
	}
	
	printf("lenght is %d \n",len);
	printf("vowels is  %d \n",v);
	printf("consonant is %d \n",c);
	return 0;
}
