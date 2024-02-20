#include<stdio.h>
int main()
{
	int i,a[10],n,sum_odd=0,sum_eve=0;
	printf("Enter length of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum_eve=sum_eve+a[i];
		}
		else
		{
			sum_odd=sum_odd+a[i];
		}
		
	}
	printf("\n THe sum of all even numbers in entered array is %d",sum_eve);
	printf("\n THe sum of all odd numbers in eneterd array is %d",sum_odd);
	return 0;
}
