#include<stdio.h>
int main()
{
	int num,i,flag=0;
	printf("Enter number :");
	scanf(" %d",&num);
	if(num<=1)
	{
		printf("\nNot a prime number");
	}
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
			break;
		}
	}
	
	if(flag==0)
	{
		printf("\nNumber is prime");
	}
	else
	{
		printf("\nNumber is not prime");
	}
	return 0;
}
