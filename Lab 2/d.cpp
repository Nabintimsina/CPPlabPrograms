#include<iostream>

using namespace std; 


float &Larger(float &temp1, float &temp2 ){
	
	if(temp1> temp2){
		
		return temp1;
	}
	else{
		
		return temp2;
	}
	
}


int main(){
	
	float temp1, temp2,t; 
	
	cout<<"Enter the two temperatues : ";
	cin>>temp1>>temp2;
	t = Larger(temp1, temp2);
	cout<<t;
	Larger(temp1, temp2)= 100;
	
	cout<<"After seting larger tetmp to 100 : "<<endl;
	
	cout<<"Temp1 = "<<temp1<<"  Temp2= "<<temp2;
	
}

