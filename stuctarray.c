#include <stdio.h>
struct student
 {
   int s1,s2,s3,s4,s5;
 }stu[5];
int main()
{
int i,j,per;
  for(i=1;i<=5;i++)
    {
    printf("Enter marks of 5 subject %d:\n",i);
  	scanf("%d %d %d %d %d",&stu[i].s1,&stu[i].s2,&stu[i].s3,&stu[i].s4,&stu[i].s5);
	 }
	 for(i=1;i<=5;i++)
    {
    printf("marks of 5 subjects of student %d are:%d %d %d %d %d\n",i,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].s4,stu[i].s5);
    }
	for(i=1;i<=5;i++)
	{
		if(stu[i].s1 && stu[i] && stu[i].s3 && stu[i].s4 && stu[i].s5>=40)
			{
			per=(stu[i].s1+stu[i].s2+stu[i].s3+stu[i].s4+stu[i].s5)/5;
			printf("You are pass and your percentage are:%d",per);
			printf("\n");
			continue;	
			}else{
				printf("You are fail");
			}
	}
		 
return 0;	
}
