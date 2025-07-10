#include<stdio.h>
int power(int n,int x);
int main(){
	int n,x;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("enter power of number:");
	scanf("%d",&x);
	int result=power(n,x); 
	printf("%d to the power of %d is %d",n,x,result);
	return 0;
}
int power(int n,int x){
	if(x==0){
		return 1;
	}
	else{
		return n*power(n,x-1);
	}
}
