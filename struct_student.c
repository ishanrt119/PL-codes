#include<stdio.h>
struct student{
	char name[50];
	int marks[5];
	int aggr;
	int total;
}std;

int main()
{
	int i;
	printf("Enter name of student : ");
	scanf("%s",std.name);
	printf("Enter marks of 5 subjects : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&std.marks[i]);
	}
	for(i=0;i<5;i++)
	{
		std.total=std.marks[i];
	}
	std.aggr=std.total/5;
	
	printf("\nThe aggregate is : %d",std.aggr);
	if(std.aggr>=75)
	{
		printf("\nDistinction");
	}
	else
	{
		printf("\nFirst class");
	}
}
