#include<iostream>
using namespace std;


class Distance{
	int feet;
	int inch;
	
	public: 
	Distance() {feet = 0; inch = 0;}
	
	Distance(int f, int in){
		feet = f;
		inch  = in;
		
	}
	
	Distance Add(Distance d2){
		Distance temp;
		temp.feet = feet + d2.feet;
		temp.inch = inch + d2.inch;
		
		return temp;
		
	}	
	
	void Display(){
		
		cout<<endl<<"Feet is "<<feet<<endl;
		cout<<"Inch is "<<inch;
		
	}
	
};

int main(){
	
	Distance d1(4, 6);
	Distance d2(6, 4);
	
	Distance d3;
	
	d3 = d1.Add(d2);
	
	d3.Display();
	
	
}
