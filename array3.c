#include<stdio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],i,j;
printf("Enter values:\n");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
		scanf("%d",&a[i][j]);
    }
    
}
printf("Matrix a is: \n");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
		printf("%d\t",a[i][j]);
    }
  printf("\n") ; 
}
printf("Enter values:\n");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
		scanf("%d",&b[i][j]);
    }
    
}
printf("Matrix b is: \n");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
		printf("%d\t",b[i][j]);
    }
  printf("\n") ; 
}

printf("Addition of matrix a and b is: \n");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
    	c[i][j]=a[i][j]+b[i][j];
		printf("%d\t",c[i][j]);
    }
  printf("\n") ; 
}

return 0;
}
