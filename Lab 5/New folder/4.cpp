#include<stdio.h>
int highest(int n);
int main()
{
	int n,h;
	printf("enter the number:");
	scanf("%d",&n);
	h=highest(n);
	printf("%d is the highest",h);
	return 0;
	
}
int highest(int n)
{
	if(n==0)
	 return 0;
	int last=n%10;
	int max=highest(n/10);
	return (last>max)?last:max;
}
