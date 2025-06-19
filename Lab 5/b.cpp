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
	
	Time(int m, int s){
		minutes = m;
		seconds = s;
	}
	
	operator float(){
		
		float hours;
	
		hours = minutes/60.0;
		hours += seconds/3600.0;
		
		return hours;
	}
	
};

int main(){
	
	Time t(60, 3600);
	
	float hours = t;
	
	cout<<"Hours is : "<<hours;
	
}
