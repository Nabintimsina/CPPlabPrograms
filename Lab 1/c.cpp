#include<iostream>

using namespace std;

class LargestNumber{
	
	public:
		int f_number;
		int l_number;
		
	public: 
		int largest(){
			
			if(f_number> l_number)
				return f_number;
				
			else
				return l_number; 
			
		}
	
};

int main(){
	
	LargestNumber ln;
	
	cout<<"Enter two numbers : ";
	cin>>ln.f_number>>ln.l_number;
	
	cout<<"Largest number is : "<<ln.largest();
	
	
}
