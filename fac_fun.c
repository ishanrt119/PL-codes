#include<stdio.h>
int fact();
int main()
{
	
	int a=fact();
	printf("\nThe factorial is %d",a);
	} 
	int fact()
{

		int i,num,fac=1;
		printf("Enter a number :");
		scanf("%d",&num);
		for(i=num;i>=1;i--)
		{
			fac=fac*i;
			
		}
		return fac;
	}

