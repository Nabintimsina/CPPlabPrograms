#include<iostream>
#include<cmath>

using namespace std;

float Volume(int length){
	
	return (pow(length, 3));
	
}

float Volume(int length , int breadth , int height){
	
	return (length*breadth * height);
	
}
float Volume(int radius , int height){
	
	
	return( 3.14* pow(radius, 2) * height);
}

int main(){
	
	cout<<"The volume of cube is : "<<Volume(3)<<endl;
	
	cout<<"The volume of rectangular box is :"<<Volume(2, 4, 5 )<<endl;
	
	cout<<"The volume of cylinder is : "<<Volume(2, 3)<<endl;
	
	
	return 0;
}



