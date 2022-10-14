#include<stdio.h>
int main()
{
	// 2d arrary 
	
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	
	// print 2d arrary
	
	printf("Enter first matrix elements :\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
    printf("Enter second matrix elements :\n");	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);

		}
    }	
    printf(" first matrix is \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
    printf("second MATRIX is :\n");	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);

		}
		 printf("\n");
    }	
	
	printf("third marix is \n");
	
	for(i=0;i<3;i++)
	{     
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
		}
		printf("\n");
    }
	
	return 0;
}


