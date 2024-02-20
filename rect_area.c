#include<stdio.h>
int area();
int main()
{
	int a=area();
	printf("\nThe area is %d",a);
		
}

int area()
{
	
	int l,b,area;
	printf("Enter length : ");
	scanf("%d",&l);
	printf("\nEnter breadth : ");
	scanf("%d",&b);
	area=l*b;
	return area;
}
