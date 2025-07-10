#include<stdio.h>
int fact(int n);
int main(){
	int n;
	printf("Enter any number:");
	scanf("%d", &n);
	int factorial = fact(n);
	printf("Factorial is %d", factorial);
	return 0;
}

int fact(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
