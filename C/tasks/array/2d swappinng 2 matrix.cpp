#include<stdio.h>
int main()
{
	// 2d arrary 
	
	int a[2][2],b[2][2],temp[2][2];
	int i,j;
	
	// print 2d arrary
	
	printf("Enter first matrix elements :\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
    printf("Enter second matrix elements :\n");	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    
	printf("before swapping \n");
		
    printf(" first matrix is \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
    printf("second MATRIX is :\n");	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);

		}
		 printf("\n");
    }	
	
	for(i=0;i<2;i++)
	{     
		for(j=0;j<2;j++)
		{
			temp[i][j] = a[i][j];
			a[i][j]=b[i][j];
			b[i][j]=temp[i][j];
		}
    }
    printf("after swapping ");
	printf(" first matrix is \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
    printf("second MATRIX is :\n");	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);

		}
		 printf("\n");
    }		
	
	
	return 0;
}


