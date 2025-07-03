#include<iostream>
using namespace std;

class A {
protected:
    int x;

public:
    A(int a) {
        x = a;
    }

    void display() {
        cout << "X is " << x << endl;
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

class C : public B {
protected:
    int z;

public:
    C(int a, int b, int c) : B(a, b) {
        z = c;
    }

    void display() {
        B::display();
        cout << "Z is " << z << endl;
    }
};

int main() {
    C c(4, 5, 6);
    c.display();
    return 0;
}

