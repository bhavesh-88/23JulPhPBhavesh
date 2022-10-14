#include<stdio.h>
int main()
{
  int a;
  
   printf(" Enter any number between 1 to 7  \n" );	
   scanf("%d", &a);
   
   switch (a)
    {    
        case 1:
            printf("Monday");
            break;
	    
	    case 2:
	    
	       printf(" tuesday " );
	       break; 
      
	    case 3: 
	       printf(" wednesday ");
	      break;
	      
	    case 4:
	       printf(" Thursday ");
	      break;
	
	    case 5:
	       printf(" Friday ");
	       break;
	
	   case 6:
	       printf(" Saturday ");
	     break;
	   
	   case 7:
	     printf(" Sunday" );
	    break;
	    
	    default:  
	     printf(" Invalid input");  
	     break;
	     
	     
 }
	     
	     
	     
	     
}



