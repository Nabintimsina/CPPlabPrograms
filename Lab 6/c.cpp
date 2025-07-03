#include<iostream>
using namespace std;


class Shape{
	protected:
		
		int length, breadth;
		
	public : 
	
	Shape(int l, int b){
		length = l;
		breadth =b;
	}
		void Area();
	
};

class Rectangle : public Shape {
	
	int area;
	
	public: 
	
	Rectangle(int l, int b) : Shape(l, b){}
	
	
	void Area(){
		area = length * breadth;
		cout<<"Area is "<<area;
	}
};

int main(){
	
	Rectangle r(6, 5);
	r.Area();
	return 0;
}
