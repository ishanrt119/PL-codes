#include<stdio.h>
float area();
float vol();
int main()
{
	float a=area();
	float p=vol();
	printf("\nThe surface area is %f",a);
	printf("\nThe volume is %f",p);
		
}

float area()
{
	const float pi=3.14;
	float r,h,area;
	printf("Enter radius : ");
	scanf("%f",&r);
	printf("\nEnter height : ");
	scanf("%f",&h);
	area=2*pi*r*h;
	return area;
}

float vol()
{
	const float pi=3.14;
	float r,h,vol;
	printf("Enter radius : ");
	scanf("%f",&r);
	printf("\nEnter height : ");
	scanf("%f",&h);
	vol=pi*r*r*h;
	return vol;
}
