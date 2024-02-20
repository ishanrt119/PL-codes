#include<stdio.h>
int main()
{
	int i,n1,n2,rem,num=0;
	printf("Enter a number :");
	scanf("%d",&n1);
	n2=n1;
	while(n1!=0)
	{
		rem=n1%10;
		num=num*10+rem;
		n1=n1/10;
	}
	if(num==n2)
	{
		printf("\nThe number is pallindrome");
	}
	else
	{
		printf("\nThe number is not a pallindrome.");
	}
	return 0;
}
