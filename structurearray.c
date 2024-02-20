#include <stdio.h>
struct student
 {
   int s1,s2,s3,s4,s5;
 }stu[5];
int main()
{
int i;
  for(i=1;i<=5;i++)
    {
    printf("Enter marks of 5 subject %d:\n",i);
  	scanf("%d\n %d\n %d\n %d\n %d\n",&stu[i].s1,&stu[i].s2,&stu[i].s3,&stu[i].s4,&stu[i].s5);
	 }
	 for(i=1;i<=5;i++)
    {
    printf("marks of 5 subjectsof student %d are:%d %d %d %d %d\n",i,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].s4,stu[i].s5);
    }	 
return 0;	
}
