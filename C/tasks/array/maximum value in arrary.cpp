#include<stdio.h>
int main()
{
	int a[100],size,i,max;
	
	printf("Enter size arrary ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max =a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("MAXIMUM VALUE OF ARRARY IS %d",max);
	return 0;
	
	
	
}



