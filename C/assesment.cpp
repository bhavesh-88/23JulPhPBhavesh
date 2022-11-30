#include<stdio.h>


int choice()
{
	int ch,q,Total;
	char choice;
	
	int a=180;
	int b=100;
	int c=100;
	int d=120;
	
	first:
	again:	
	printf("\nEnter your choice  :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			
	        printf("Yoy Have Selected PIZZA\n");
	        ch=a;
	        break;
	    case 2:
	    	
	        printf("Yoy Have Selected BURGER\n");
		    ch=b;
		    break;
		case 3:
	        printf("YOU Have Selected IDLI\n");
	        ch=c;
	        break;
	    case 4:
	        printf("You Have Selected DOSa\n");
	        ch=d;
		    break;
			
	    default:
	    	printf("Invalid input !! Enter your choice again");
	    	goto first;
	    	break;
	}
	
	
	printf("Enter quantity =");
	scanf("%d",&q);
	
	Total =q*ch;
	
	
	printf(" Total Amount =%d \n",Total);
	
	
	printf("Want to continue buying then press y or else press n :  ");
    scanf("%c",&choice);
	while(choice=='y'||choice=='Y')
	{
		goto again; 
		
    }
	
}


int main()
{
	printf("\n----------------------Menu Card-------------------\n\n");
	printf("\n 1. PIZZA       price =180/pcs \n\n 2. BURGER     price=100/pcs \n\n 3. IDLI       price =50/pcs \n\n 4. DOSA     price=120/pcs \n\n");
	
	choice();
}
