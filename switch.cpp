#include<stdio.h>
int main()
{
	int ch,n1,n2,n3,n4;
	int fac=1;
	int sqr,cub,n5;
	printf("Choose from below :");
	printf("\n1. Factorial");
	printf("\n2. Even or Odd");
	printf("\n3. Positive or Negative");
	printf("\n4. Square");
	printf("\n5. Cube");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("\nEnter number for finding factorial : ");
		scanf("%d",&n1);
		while(n1>=1)
		{
			fac=fac*n1;
			n1--;
		}
		printf("The factorial is : %d",fac);
		break;
		
	case 2:printf("\nEnter number: ");
		   scanf("%d",&n2);
		   if(n2%2==0)
		   {
		   	printf("\nNumber is even");
		   }
		   else
		   {
		   	printf("\nNumber is odd");
		   }
		   break;
			
	case 3:printf("\nEnter number: ");
		   scanf("%d",&n3);
		   if(n3>0)
		   {
		   	printf("\nNumber is positive");
		   }
		   else if(n3<0)
		   {
		   	printf("\nNumber is negative");
		   }
		   else
		   {
		   	printf("\nNumber is zero");
		   }
		   break;
	
	case 4:printf("\nEnter number: ");
		   scanf("%d",&n4);
		   sqr=n4*n4;
		   printf("The square is : %d",sqr);
		   break;
		   
	case 5:printf("\nEnter number: ");
		   scanf("%d",&n5);
		   cub=n5*n5*n5;
		   printf("The cube is : %d",cub);
		   break;
		   
	default :printf("\nNo valid choice. Please re-enter choice!!");
	}
	return 0;
}
