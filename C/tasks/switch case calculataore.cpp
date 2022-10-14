#include<stdio.h>
int main()
{
	 float a,b,c;
	 char ch;
	 
	 
	printf("Enter firdt number ");
    scanf("%f",&a);	 
	printf("Enter second number ");
	scanf("%f",&b);
	printf("Enter your choice to perfome operators ");
	scanf(" %c",&ch);
	 
	switch (ch)
	{
		    case '+':c=a+b;
	 	              printf("ADDITION = %f",c);
	           	      break;
	        case '-':c=a-b;
	 	              printf("divided = %f",a-b);
	           	      break;
            case '*':c=a*b;
	 	             printf("multiplication = %f",a*b);
	           	     break;
            case '/':c=a/b;
	 	            printf("dividion = %f",a/b);
	              	break;
	        default:
			        printf("Invalid operators");
			        break;   	

	} 
	 
	 return 0;
}
