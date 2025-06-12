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
	
	void operator++(){
		++metre;
	}
	
	void display(){
		cout<<"Metre : "<<metre;
	}
	
};

int main(){
	
	Distance d(5);
	++d;
	d.display();
	
	return 0 ;
	
}
