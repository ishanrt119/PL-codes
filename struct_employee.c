#include<stdio.h>

struct employee{
	char name[50];
	char desig[50];
	int basic;
	int TA;
	int DA;
	int gross;
}emp;

int main()
{
	printf("Enter name of employee : ");
	scanf("%s",emp.name);
	printf("\nEnter designation of employee : ");
	scanf("%s",emp.desig);
	printf("\nEnter basic pay of employee : ");	
	scanf("%d",&emp.basic);
	
	emp.DA=0.02*emp.basic;
	emp.TA=0.05*emp.basic;
	emp.gross=emp.basic+emp.DA+emp.TA;
	
	printf("\n\nThe basic salary is : %d",emp.basic);
	printf("\nThe DA is : %d",emp.DA);
	printf("\nThe TA is : %d",emp.TA);
	printf("\nThe gross salary is : %d",emp.gross);
	
	
	printf("\n\n\nThe size of structure employee is %d",sizeof(struct employee));
	return 0;
} 
