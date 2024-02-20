#include<stdio.h>
int main()
{
	int a[10],b[10],i,n;
	printf("Enter length of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element : ");
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[(n-1)-i];
	}

		printf("The reversed array is : ");
	for(i=0;i<n;i++)
	{
	
		printf("%d ",b[i]);
	}
	return 0;
}
