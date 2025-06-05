#include<iostream>

using namespace std;

class Fahrenheit;

class Celcius{

	float ctemp;	
	
	public:
		
		Celcius(): ctemp(0){};
		
		Celcius(int value){
			ctemp = value;	
		}
		
		void display(){
			cout<<"Temp in Celcius is : "<<ctemp;
		}

		
		Fahrenheit toFahrenheit();
		
		
	
};

class Fahrenheit{
	
	float ftemp;
	public : 
		
		Fahrenheit() : ftemp(0){};
		
		Fahrenheit(int value){
			ftemp = value;
		}
		
		void display(){
			cout<<"Temp in Fahrenheit is : "<<ftemp;
		}
		

		
		friend class Celcius; // now celcius can acccess private data of fahrenheit

};

Fahrenheit Celcius::toFahrenheit(){
	
			Fahrenheit f;
			
			f.ftemp = (ctemp * 9/5)+ 32;
			
			return f;
			
	}


int main(){
	
	float temp; 
	Fahrenheit f;
	
	cout<<"Enter the temp in celcius : ";
	cin>>temp;
	Celcius c(temp);
	f = c.toFahrenheit();
	f.display();
	
	
	
	
	
	return 0 ;	
	
}

































