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
		
		Complex operator+(Complex c2){
			
			Complex temp;
			temp.real = real+ c2.real;
			temp.img = img + c2.img;
		
			return temp;		
		}
	
	void display(){
		
		cout<<"Number is : "<<real<<"+ i"<<img;
	}
	
};

int main(){
	
	Complex c1(5, 3 );
	Complex c2(4, 7);
	Complex add;
	add = c1 + c2;
	add.display();
	
}
