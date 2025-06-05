#include<iostream>

using namespace std;


class Student {
	
	string name;
	int roll;
	int marks;
	
	
	public : 
	void input(){
		
		cout<<endl<<"Enter name : ";
		cin>>name;
		
		cout<<endl<<"Enter roll : ";
		cin>>roll;
		
		cout<<endl<<"Enter marks : ";
		cin>>marks;
		
		cout<<endl;
		
		
	}
	
	
	void DisplayIfPassed(){
		if(marks>= 40){
			cout<<endl<<"-----------------------";
			cout<<endl<<"Name : "<<name;
			cout<<endl<<"Roll : "<<roll;
			cout<<endl<<"Marks: "<<marks;
			
		}
	}
	
};

int main(){
	
	int i,n = 5;
	Student s[5];
	
	for(i = 0; i<n ; i++){
		
		s[i].input();
	}
	
	for (i = 0; i<n ; i++){
		s[i].DisplayIfPassed();
	}
	
	return 0;
	
}






























