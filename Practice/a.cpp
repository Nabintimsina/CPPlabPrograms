#include<iostream>
using namespace std;

class University{
	
	protected : 
	string uName;
	
	public: 
		University(string n){
			uName = n;
		}
		
		void displayU(){
			cout<<"University Name is : "<<uName<<endl;
		}
	
};


class Faculty : public University{
	
	protected : 
	
		string facName;
		
	public: 
		
		Faculty(string u, string f): University(u){
			facName = f;
		}
		
		void displayF(){
			cout<<"Faculty Name is : "<<facName<<endl;
			
		}
	
};

class Lecturer : public Faculty{
	protected : 
	
		string lecName;
		
	public: 
		
		Lecturer(string u, string f, string l): Faculty(u, f){
			lecName = l;
		}
		
		void displayL(){
			cout<<"Lecturer Name is : "<<lecName<<endl;
			
		}
	
};

int main(){
	
	Lecturer l("TU", "Civil", "Nabin");
	
	l.displayU();
	l.displayF();
	l.displayL();
	
	
	return 0;

	
}
