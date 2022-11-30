//Sunday to monday using switch case
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number between 1 to 7 : ");
	scanf("%d",&a);
	
	
	switch(a)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednsday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid Input");
			break;
	}

 return 0;
}
/*
//vowel and consonant
#include<stdio.h>
int main()
{
	char a;
       printf("Enter the Alphabate : ");
       scanf("%c",&a);
       switch(a)
       {
       	   case 'a':
       	     case 'A':
       	      case 'e':
       	       case 'E':
       	        case 'i':
       	         case'I':
       	          case'o':
       	           case 'O':
       	            case 'u':
       	             case 'U':
       	             printf("Vowel");
       	             break;
     
     
      default:
      	printf("consonant");
      	break;
      	  	 
	}
	
	
	return 0;
}
*/
