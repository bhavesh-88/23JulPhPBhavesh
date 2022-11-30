#include<stdio.h>

int max(int a[100],int size);

int main()
{
	int Max;
//	int a[100],size;
  //  max(a,size);
	//Max=max (a[100],size);
	printf("MAXIMUM VALUE OF ARRARY IS %d",max(a[100],size));
	
	return 0;
	
	
}

int max(int a[100],int size)
{
	int i;

    printf("Enter size arrary ");
	scanf("%d",&size);
		
	int max =a[0];
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
}

