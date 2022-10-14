#include<stdio.h>
int main()
{
	// 2d arrary 
	
	int a[3][3];
	int i,j,sumrow,sumcol;
	
	// print 2d arrary
	
	printf("Enter elements of matrix");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
       printf("MATRIX is :\n");	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);

		}
		 printf("\n");
    }	
	
	for(i=0;i<3;i++)
	{     
	     sumrow=sumcol = 0;
		for(j=0;j<3;j++)
		{
			sumrow = sumrow+a[i][j];
			sumcol = sumcol+a[j][i];

		}
		 printf("sumrow = %d,sumcol = %d \n",sumrow,sumcol);
    }
	
	return 0;
}
