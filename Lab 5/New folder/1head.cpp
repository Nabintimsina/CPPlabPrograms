#include<stdio.h>
int NUM(int n);
	
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	NUM(n);
	return 0;
}
int NUM(int n)
{
	if(n==0)
	{
	return 1;
	
}
	else
	{
	    NUM(n-1);
		printf("%d\t",n);
	}
}
