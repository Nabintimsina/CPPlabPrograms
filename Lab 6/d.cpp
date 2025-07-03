#include<iostream>
using namespace std;


class Person{

	public : 
		
	virtual void display()= 0;
	
};

class Student : virtual public Person {
	
	public : 
		void display(){
			cout<<"I am student";
		}
	
};

class Employee : virtual public Person {
	
	public: 
		void display(){
			cout<<"I am employee";
		}
		
};

class Intern : public Student, public Employee  {
	
	public:
		
		void display(){
			cout<<" I am an intern, Student";
		}
	
	
};

int main(){
	Intern internobj;
	
	internobj.display();
	
	return 0; 
}
