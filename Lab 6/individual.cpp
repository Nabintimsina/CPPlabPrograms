#include<iostream>
using namespace std;

class A {
	protected : 
	
		int x;
			
	public:
	 A(int a ){
			x = a;
		}
		 
		void display(){
			cout<<"X is "<<x<<endl;
		}
	
};

class B : public A {
	
	protected : 
		int y ; 
		
	public: 
		B(int a, int b ): A(a){
			y = b;
		}
		
		void display(){
			
			A::display() ;
			cout<< "Y is "<<y<<endl;
		}
	
};

int main(){
	
	B b(4,5);
	
	b.display();
	
	return 0 ; 
	
}
