#include<stdio.h>
int main()
{
	 float a,b,c;
	 char ch;
	 
	 
	printf("1.addition \n");
	printf("2.subtraction \n");
	printf("3.multiplication \n");
	printf("4.division");
	
	printf("Enter firdt number ");
    scanf("%f",&a);	 
	printf("Enter second number ");
	scanf("%f",&b);
	printf("Enter your choice to perfome operators ");
	scanf(" %c",&ch);
	 
	switch (ch)
	{
		    case 1 :c=a+b;
	 	              printf("ADDITION = %f",c);
	           	      break;
	        case 2 :c=a-b;
	 	              printf("divided = %f",a-b);
	           	      break;
            case 3 :c=a*b;
	 	             printf("multiplication = %f",a*b);
	           	     break;
            case 4 :c=a/b;
	 	            printf("division = %f",a/b);
	              	break;
	        default:
			        printf("Invalid operators");
			        break;   	

	} 
	 
	 return 0;
}
