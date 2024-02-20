#include<stdio.h>
int main()
{
	int r1=2,c1=2,i,j,r2,c2,l,m;
	
	
	int a[2][2],t[2][2],sum[5][5];
	
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			if(i=j)
			{
				t[i][j]=a[i][j];
			}
			else
			{
				t[i][j]=a[j][i];
			}
		}
	}
	
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			printf("%d",t[i][j]);
		}
	}
	
	
	
	
	
	//Second matrix
	
/*	for(l=1;l<=r2;l++)
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
	}*/
	
	
	
	return 0;
}
