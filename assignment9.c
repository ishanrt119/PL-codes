#include<stdio.h>
int main()
{
	int s[5][5],i,j,count=5,test,m[5],total[10],per,cnt=0,ct[i];
	float indi[10];
	//Accepting marks
	for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("Enter marks for student %d for subject %d : ",i+1,j+1);
				scanf("%d",&s[i][j]);
			}
	}
	
	//Printing the marks
	/*for(i=0;i<10;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("\nThe marks of student %d in subject %d is %d",i+1,j+1,s[i][j]);
			}
		}*/
		
	for(i=0;i<5;i++)
		{
			total[i]=0;
			for(j=0;j<5;j++)
			{
				if(s[i][j]<40)
				{
					printf("\nStudent %d is fail",i+1);
					count--;
					break;
				}
				else
				{
					total[i]=total[i]+s[i][j];
					
				}
			}
		}
		printf("\nThe number of students passed is %d",count);
		
	per=count*10;
	printf("\nThe percentage of class is %d %",per);
	
	for(i=0;i<5;i++)
	{
		indi[i]=total[i]/5;
		printf("\nStudent %d has %f",i+1,indi[i]);
		if(indi[i]>75)
		{
			printf("\nDistinction");
			cnt++;
		}
	}
	printf("\nTotal number of distinctions : %d",cnt);
	
	
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{ 
			if(s[j][i]<40)
			{
					
			}
		}
	}
}
