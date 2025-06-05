#include<iostream>

using namespace std;

class Rectangle{
	
	public: 	
		int length;
		int breadth; 
		
	public:
		int area(){
			return length*breadth; 
		}
		
		int perimeter(){
			return 2*(length+ breadth);
		}
};

int main(){
	
	Rectangle r;
	
	cout<<"Enter the length and breadth of rectanle : "<<endl;
	cin>>r.length>>r.breadth;
	
	cout<<"The area is : "<<r.area()<<endl<<"Perimeter is : "<<r.perimeter();
	
	return 1;
	
}
