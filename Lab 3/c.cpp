#include<iostream>

using namespace std;

class Second ;

class First{
	
	int data1;
	
	public: 
	First(int a ){
		data1 = a;
	}
	
	friend Largest(First f, Second s);
	
};

class Second{
	
	int data2;
	
	public : 
	Second(int b ){
		data2 = b;
	}
	
	friend Largest(First f, Second s);
	
};

int Largest(First f, Second s){
	
	if(s.data2 > f.data1){
		return s.data2;
	}
	else
		return f.data1;
		
}


int main(){
	
	First f(5);
	Second s(6);
	
	int greatest = Largest(f,s);
	
	cout<<"Greatest is "<<greatest;
	
	
}
































