#include<iostream>

using namespace std;

class F{
	
	float ft;
	
	public : 
	
	F(){
		ft = 0;
	}
	
	F(float t){
		ft = t;
	}
	
	void display(){
		cout<<"Temp in fahrenheit is : "<<ft;
	}


};


class C{
	
	float ct;
	
	public:
		
	C(){
		ct = 0;
	}
		
	C(float t){
		ct = t;
	}
		
	operator F(){	
    	float f = (ct * 9 / 5.0f) + 32;
    	F temp(f);
    	return temp;

//		return 	F((ct*9/5.0)+ 32);
	}
	
	void display()
	{
		cout<<"Temp in celcius is "<<ct;
	}
		
};



int main(){
	
	F f1;
	C c1(37);
	
	f1 = c1;
	
	f1.display();
	
}
