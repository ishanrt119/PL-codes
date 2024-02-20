#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("\nEnter second number : ");
	scanf("%d",&n2);
	printf("\nEnter third number : ");
	scanf("%d",&n3);
	if(n1>n2 & n1>n3)
	{
		printf("\nLargest number is %d",n1);
	}
	else if(n2>n1 & n2>n3)
	{
		printf("\nLargest number is %d",n2);
	}
	else
	{
		printf("\nLargest number is %d",n3);
	}
	
	if(n1<n2 & n1<n3)
	{
		printf(" and smallest number is %d",n1);
	}
	else if(n2<n1 & n2<n3)
	{
		printf(" and smallest number is %d",n2);
	}
	else
	{
		printf(" and smallest number is %d",n3);
	}
	return 0;
}
