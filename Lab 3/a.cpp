#include<iostream>
using namespace std;


class Time{
	int hour, minute, seconds;
	
	public : 
	
//	Time(){hour = 0; minute = 0; seconds = 0;}

	Time() :  hour(0), minute(0), seconds(0){}
	
	Time( int h , int m, int s){
		hour = h;
		minute = m;
		seconds = s;
	}
	
	Time addTime(Time t2){
		
		Time temp;
		
		temp.hour = hour+ t2.hour;
		temp.minute = minute + t2.minute;
		temp.seconds = seconds + t2.seconds;
		
		return temp;
	}
	
	
	void normalize(){
		
		if(seconds > 60){
			minute = minute + seconds/60;
			seconds %=  60;
		
		}
		
		if(minute > 60){
			hour += minute/60;
			minute %= 60;
		}
	}
	
	void Display(){
		
		cout<<endl<<"Time is :  "<<hour<<": "<<minute<<": "<<seconds;
	}

	
	
};

int main(){
	
	Time t1(12,34,56);
	Time t2(10,35,14);
	
	Time add;
	
	add = t1.addTime(t2);
	
	add.normalize() ;
	
	add.Display();
	
	
	
	return 0 ;
}





















