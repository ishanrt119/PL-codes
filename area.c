#include<stdio.h>
float area();
float per();
int main()
{
	float a=area();
	float p=per();
	printf("\nThe area is %f",a);
	printf("\nThe circumference is %f",p);
		
}

float area()
{
	const float pi=3.14;
	float r,area;
	printf("Enter radius : ");
	scanf("%f",&r);
	area=pi*r*r;
	return area;
}

float per()
{
	const float pi=3.14;
	float r,cir;
	printf("Enter radius : ");
	scanf("%f",&r);
	cir=pi*r*2;
	return cir;
}
