#include<stdio.h>
int sper();
int main()
{
	int a=sper();
	printf("\nThe semi-perimeter is %d",a);
		
}

int sper()
{
	
	int a,b,c,semi;
	printf("Enter first side : ");
	scanf("%d",&a);
	printf("\nEnter second side : ");
	scanf("%d",&b);
	printf("\nEnter third side : ");
	scanf("%d",&c);
	semi=(a+b+c)/2;
	
	return semi;
}
