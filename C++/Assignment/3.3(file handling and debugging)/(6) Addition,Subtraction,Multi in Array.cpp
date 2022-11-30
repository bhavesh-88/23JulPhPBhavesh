#include<stdio.h>
#define N 50

int main()
{
   int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
   
   printf("Enter rows and columns for first matrix");
   scanf("%d %d",&m,&n);
   printf("Enter first matrix elements\n");
   
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
	  {
       	  scanf("%d",&a[i][j]);	 	
	   } 	
    }	
   	
   	printf("Enter rows and columns for first second");
   scanf("%d %d",&p,&q);
   printf("Enter scond matrix elements\n");
   
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
	  {
       	  scanf("%d",&b[i][j]);			 	
	   } 	
    }	
  
   	printf("first matrix is \n");
   	for(i=0;i<m;i++)
   	{
   		for(j=0;j<n;j++)
   		{
   			printf("%d ",a[i][j]);
   			
		}
		printf("\n");
	}
    printf("second matrix is \n");
   	for(i=0;i<p;i++)
   	{
   		for(j=0;j<q;j++)
   		{
   			printf("%d ",b[i][j]);
   			
		}
		printf("\n");
	}
  	
   	if(n!=p)
   	{
   		printf("cannot be multiply");
   		
	}
   	else
   	{
   		for(i=0;i<m;i++)
   		{
   			for(j=0;j<q;j++)
   			{
   				sum = 0;
   				for(k=0;k<p;k++)
   				{
   					sum =sum+(a[i][k]*b[k][j]);
   						c[i][j]= sum;
				   }
   			//	c[i][j]= sum;
			   }
		   }
	   }
   	
   	printf("multiplication is \n");
   	for(i=0;i<m;i++)
   	{
   		for(j=0;j<q;j++)
   		{
   			printf("%d ",c[i][j]);
   			
		}
		printf("\n");
	}
   	
   	
   	return 0;
   	
}
