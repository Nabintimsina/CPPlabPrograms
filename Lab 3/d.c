#include<iostream>

using namespaces std;


class Celcius{
	
	float ctemp;
	
	public:
		
		Celcius(): ctemp(0);
		
		Celcius(int value){
			
			ctemp = value;
			
		}
		
		Fahrenheit toFahrenheit(){
			Fahrenheit f;
			
			f.ftemp = (ctemp * 9/5)+ 32;
			
			return f.ftemp;
			
		}
	
};

class Fahrenheit{
	
	float ftemp;
	
	public : 
		
		Fahrenheit() : ftemp(0);
		
		Fahrenheit(int value){
			ftemp = value;
		}
		
		Celcius toCelcius(){
			Celcius c;
			
			c.ctemp = (ftemp - 32)* 5/9;
			
			return c.ctemp;
			
		}	
	
	
};


int main(){
	
	float temp; 
	
	cout<<"Enter the temp in celcius : ";
	cin>>temp;
	
	Celcius c(37);
	cout<<"Fahrenheit is : "<<c.toFahrenheit();
	
	
	
	
	
	return 0 ;	
	
}

































