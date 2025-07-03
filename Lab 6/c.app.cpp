#include<iostream>
using namespace std;


class Shape{
	
	protected : 
	
	int length , breadth;
	
	public : 
	
		Shape(int l , int b ){
			length = l;
			breadth = b;
		}
		
		void Area();
	
};

class Rectangle: public Shape {
	
	int a ; 
	
	public : 
	
	void Area(){
		a = length * breadth;
		cout<<"The area of Rectangle is : "<<a;
		
	}
	
};


int main(){
	
	Rectangle r;
	r.Area();
	
}
