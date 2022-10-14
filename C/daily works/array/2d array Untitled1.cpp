#include<stdio.h>
int main()
{
	// 2d arrary 
	
	int a[2][2] = {{12,23},{45,67}};
	int i,j;
	
	// print 2d arrary
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		 printf("\n");
	}
	
	return 0;
}
