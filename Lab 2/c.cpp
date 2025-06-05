#include<iostream>

using namespace std; 

inline void Payment(float salary){
	
	float tax;
	
	tax = 0.1* salary;
	
	
	cout<<"Net salary is "<<salary - tax;
	
}

int main(){
	
	float salary;
	
	cout<<"Enter the salary : ";
	cin>>salary;
	
	
	Payment(salary);
	
	
}
