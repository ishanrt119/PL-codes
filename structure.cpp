#include <stdio.h>
struct student
{
	int Roll_no;
	float per;
	char Name[];
}Avi;


union student2
{
	int Roll_no;
	float per;
	char Name[];
}Avis;

int main()
{
Avi.Roll_no=32;
Avi.per=99.99;
strcpy(Avi.Name,"Avishkar");
printf("Size of Roll no. =%d\n",sizeof(Avi.Roll_no));
printf("Size of percentage =%d\n",sizeof(Avi.per));
printf("Size of Name =%d\n",sizeof(Avi.Name));
printf("Size of Name =%d\n\n",sizeof(student));
Avis.Roll_no=32;
Avis.per=99.99;
strcpy(Avi.Name,"Avishkar");
printf("Size of Roll no. =%d\n",sizeof(Avis.Roll_no));
printf("Size of percentage =%d\n",sizeof(Avis.per));
printf("Size of Name =%d\n",sizeof(Avis.Name));
printf("Size of Name =%d",sizeof(student2));
return 0;
}
