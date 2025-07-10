#include<iostream>
using namespace std;

class LengthFeet{
	
	float value;
	
	public: 
	
		LengthFeet(float f= 0){
			value = f;
		}
		
		displayFeet(){
			cout<<"Feet is : "<<value;
		}
	
};

class LengthMeters{
	
	float value;
	
	public:
	
		LengthMeters(float f= 0) {
			
			value = f;
		}
		
		displayMeters(){
			cout<<"Meters is : "<<value;
		}
		
		
		operator LengthFeet(){
			
			return LengthFeet(value*3.28);
		}
	
};



int main(){
	
	LengthMeters lm(5.0);
	
	LengthFeet lf = lm;
	
	lf.displayFeet();
}
