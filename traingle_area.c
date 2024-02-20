#include<stdio.h>
int area();
int main()
{
	int a=area();
	printf("\nThe area is %d",a);
		
}

int area()
{
	
	int h,b,area;
	printf("Enter height : ");
	scanf("%d",&h);
	printf("\nEnter base : ");
	scanf("%d",&b);
	area=0.5*b*h;
	return area;
}
