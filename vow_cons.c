#include<stdio.h>
int main()
{
	char c;
	
	printf("Enter a charachter : ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("\nVowel");
	}
	else if(c>=0 || c<=0)
	{
		printf("\nNumber");
	}
	else
	{
		printf("\nConsonant");
	}
	return 0;
}
