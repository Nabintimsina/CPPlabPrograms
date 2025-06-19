#include<iostream>

using namespace std;


class C{
	
	float ct;
	
	public:
		
	C(){
		ct = 0;
	}
		
	C(float t){
		ct = t;
	}
	
	float getC()
	{
		return ct;
	}
	
	
	void display()
	{
		cout<<"Temp in celcius is "<<ct;
	}
		
};

class F{
	
	float ft;
	
	public : 
	
	F(){
		ft = 0;
	}
	
	F(float t){
		ft = t;
	}
	
	F(C c){
		
		ft = c.getC()*(9/5.0)+ 32;
		
	}
	
	void display(){
		cout<<"Temp in fahrenheit is : "<<ft;
	}


};






int main(){
	
	C c1(37);
	
	F f1 = c1;
	
	f1.display();

	
}
