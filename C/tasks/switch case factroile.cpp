#include<stdio.h>
int main()
{
	int a,b,ch,n,f=1,i;
	 
	 
	printf("Enter your choice ");
	scanf("%d",&ch);
	 
	switch (ch)
	{
		    case 1:	printf("Enter any number ");
                    scanf("%d",&n);
                    for(i=1;i<n;i++)
                    {
                    	printf("%d",i);
					}
                    break;
            case 2:	printf("Enter two number ");
                    scanf("%d%d",&a,&b);
					n=a+b;
					printf("SUM =%d",n);
					break;
			case 3:	printf("Enter any number ");
                    scanf("%d",&n);	
					for(i=1;i<=n;i++)
                    {
                    	f=f*i;
					}	
					 printf("factrorial=%d ",f);
					 break;       
            default:
			printf("INVALID CHOICE");
			
			return 0;        
}


}

