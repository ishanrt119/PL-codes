#include<stdio.h>
int main()
{
	int n1,n2,lcm,i;
	printf("Enter first no. : ");
	scanf("%d",&n1);
	printf("\nEnter second no. : ");
	scanf("%d",&n2);
	for(i=1;i<=n1 || i<=n2;i++)
	{
		if(n1%i==0 || n2%i==0)
		{
			lcm=i;
		}
	}
	printf("\nThe lcm is : %d",lcm);
}
