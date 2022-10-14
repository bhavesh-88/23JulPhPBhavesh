#include<stdio.h>
int main()

{
	int eng, maths, com;
	int total = eng+ maths+ com;
	int per;
	
	printf(" Enter eng  \n");
	scanf(" %d", &eng);
	
	printf(" Enter maths \n");
	scanf(" %d", &maths );
	
	printf(" Enter com \n");
	scanf(" %d", &com  );
	 total  =eng+ maths+ com;
	per =  (total*100)/300;
	
	printf(" percentagr = %d", per);
    printf("Total.... = %d  \n",total);

	
//	if (eng >=33 &&  maths >=33 && com >=33)
    

	if(per>=70)
{
		
	printf(" A grade \n");
		
	  // printf(" pass   \n");
	  // printf(" per %d  \n" , per);
}
	else if (per>=60)
{

   printf(" B grade  \n");
}
else if (per>=33)
{

   printf(" c grade  \n");
}
	else
{
	 	
   printf("Fail  \n");
	
}
    		
	
}

