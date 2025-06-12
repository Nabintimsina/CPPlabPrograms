#include<iostream>

using namespace std;

class Complex{
	
	int real;
	int img;
	
	public: 
	
	Complex() {
		real = 0; 
		img = 0;
	 }
	 
	Complex(int r, int i){
		real = r;
		img = i;
	}
		
	friend Complex operator+(Complex c1, Complex c2);
	
	void display(){
		
		cout<<"Number is : "<<real<<"+ i"<<img;
	}
	
};

	Complex operator+(Complex c1,Complex c2 ){
			
			Complex temp;
			temp.real = c1.real + c2.real;
			temp.img = c1.img + c2.img;
		
			return temp;		
		}

int main(){
	
	Complex c1(5, 3 );
	Complex c2(4, 7);
	Complex add;
	add = c1 + c2;
	add.display();
	
}
