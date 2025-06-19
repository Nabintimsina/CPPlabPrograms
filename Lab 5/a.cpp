#include<iostream>
using namespace std;

class Time{
	
	int minutes;
	int seconds;
	
	public: 
	Time(){
		minutes = 0;
		seconds = 0;
	}
	
	Time(int hour){
		minutes = hour * 60;
		seconds = hour * 3600;
		
	}
	
	void display(){
		
		cout<< "Minutes is : "<<minutes;
		cout<<endl<<"Seconds is "<<seconds;
		
	}

};

int main(){
	
	int hour;
	cout<<"Enter the hour ";
	cin>>hour;
	
	Time t= hour;
	
	t.display();
}
