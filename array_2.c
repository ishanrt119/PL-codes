#include<stdio.h>
int main()
{
	int e;
	int n;
	int i;
	int a[10];
	printf("Enter length of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter elements of array : ");
		scanf("\n%d",&e);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
