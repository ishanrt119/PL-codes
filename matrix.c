#include<stdio.h>
int main()
{
	int r1,c1,i,j,r2,c2,l,m;
	printf("Row 1");
	scanf("%d",&r1);
	printf("\nColoumn 1");
	scanf("%d",&c1);
	printf("\nRow 2");
	scanf("%d",&r2);
	printf("\nColoumn 2");
	scanf("%d",&c2);
	
	int a[5][5],b[5][5],sum[5][5];
	
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	
	
	
	
	//Second matrix
	
	for(l=1;l<=r2;l++)
	{
		for(m=1;m<=c2;m++)
		{
			scanf("%d",&b[l][m]);
		}
	}
	
	
	//Printing
	
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(l=1;l<=r2;l++)
	{
		for(m=1;m<=c2;m++)
		{
			printf("%d ",b[l][m]);
		}
		printf("\n");
	}
	
	//Addition
	sum[1][1]=a[1][1]+b[1][1];
	sum[1][2]=a[1][2]+b[1][2];
	sum[2][1]=a[2][1]+b[2][1];
	sum[2][2]=a[2][2]+b[2][2];
	printf("\n\n");
	for(l=1;l<=r2;l++)
	{
		for(m=1;m<=c2;m++)
		{
			printf("%d ",sum[l][m]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
