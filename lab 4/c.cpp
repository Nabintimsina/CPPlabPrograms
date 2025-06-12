//The unary plus (+) operator does not change the sign of its argument; 
//it simply returns the value as is. It is often used for code clarity rather than functionality.


#include<iostream>
using namespace std;

class Distance{
	
	int metre;
	
	public : 
	Distance(){
		metre = 0;
	}
	
	Distance(int m){
		metre = m;
	}
	
	friend Distance operator-(Distance d);
	
	void display(){
		cout<<"Metre : "<<metre;
	}
};

 Distance operator-(Distance d){
		
		Distance d2;
		
		d2.metre = - d.metre;
		
		return d2;
	}


int main(){
	
	Distance d1(5), d2;
	d2 = -d1;
	d2.display();
	
	return 0 ;
	
}
