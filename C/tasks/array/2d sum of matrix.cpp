#include<stdio.h>
int main()
{
	// 2d arrary 
	
	int a[2][3];
	int i,j,sum =0;
	
	// print 2d arrary
	
	printf("Enter elements of matrix :");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&a[i][j]);
		}
	}
	
       printf("MATRIX is :\n");	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			sum = sum+a[i][j];
		}
		 printf("\n");
	}

	printf("sum =%d",sum);
	
	return 0;
}
