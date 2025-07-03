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


class B: public A {
	
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

class C : public A {
protected:
    int z;

public:
    C(int a, int c) : A(a) {
        z = c;
    }

    void display() {
        A::display();
        cout << "Z is " << z << endl;
    }
};

int main() {
    C c(4, 5);
    B b(3, 4);
    b.display();
    c.display();
    return 0;
}

