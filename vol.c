#include<stdio.h>
int vol();
int main()
{
	int a=vol();
	printf("\nThe volume is %d",a);
		
}

int vol()
{
	
	int l,vol;
	printf("Enter length : ");
	scanf("%d",&l);
	
	vol=l*l*l;
	return vol;
}
