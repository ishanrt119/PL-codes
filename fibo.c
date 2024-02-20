#include<stdio.h>

int fibo()
{
	int n1=0,n2=1,sum,i,temp,n;
	printf("enter limit :");
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		if(i==1){
		
		printf(" %d",n1);
		printf(" %d",n2);
		}
		sum=n1+n2;
		printf(" %d",sum);
		temp=n1;
		n1=n2;
		n2=sum;
	}
}
int main()
{
	int n,fib;
	
	fib=fibo();
}	


