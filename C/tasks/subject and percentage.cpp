#include<stdio.h>
int main()

{
	int eng,com,ba,eco,sci;
	int total;
	float per;
	
	printf("Enter eng \n");
	scanf("%d",eng);
	
	printf("Enter com \n");
	scanf("%d",com);
	
	printf("Enter ba \n");
	scanf("%d",ba);
	
	printf("Enter eco \n");
	scanf("%d",eco);
	
	printf("Enter sci \n");	
	scanf("%d",sci);
	
	total = eng+com+ba+eco+sci;
	per = total/5;
	
	if(eng>=33 && com>=33 && ba>=33 && eco>=33 && sci>=33)
	
	{
		printf("pass \n");
		printf("per %f \n");
		
				
	}
	
    else 
	{
		printf("Fall  \n");
		
		}	
	
	printf("Total......\n");
	
}
