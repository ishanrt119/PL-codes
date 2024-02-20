#include<stdio.h>
int main()
{
	int i,n;
	int a[10];
	printf("Enter size of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Largest element is %d",a[0]);
}
