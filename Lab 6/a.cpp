#include<iostream>
using namespace std;

class Staff{
	protected : 
	
	int staff_id;
	
	public: 
	Staff(int id){
		staff_id = id;
	}
	
	void display(){
		cout<<"Staff id : "<<staff_id<<endl;
	}
	
};

class Lecturer : public Staff {
	
	protected : 
	string subject;
	
	public: 
	Lecturer(int id, string s): Staff(id){
		subject = s;
	}
	
	void display(){
		Staff:: display();
		cout<<"Lecturer sbuject : "<<subject<<endl;
	}
		
};

class Admin : public Staff {
	
	protected :
	string post_department ;
	
	public : 
	
	Admin(int id , string d) : Staff(id){
		post_department = d;
		
	}
	void display(){
		Staff:: display();
		cout<<"Post deparment : "<<post_department<<endl;
	}
};

class Librarian : public Staff {
	
	protected :
	string shift ;
	
	public : 
	
	Librarian(int id , string s) : Staff(id){
		shift = s;
		
	}
	void display(){
		Staff:: display();
		cout<<"Post deparment : "<<shift<<endl;
	}
};


int main(){
	
	Lecturer lec(1, "Math");
	Admin a(1, "Applied Sciences");
	Librarian lib(1, "Morning");
	
	lec.display();
	a.display();
	lib.display();
	
	
	
	
	return 0;
	
}
