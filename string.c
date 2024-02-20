#include<stdio.h>
int main()
{
	int i,n;
	char a[1000];
	printf("Enter length of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter string : ");
		scanf("%c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nEntered string is '%c' ",a[i]);
		
	}
}
