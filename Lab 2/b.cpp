#include<iostream>

using namespace std; 

void Display(char a = '*', int n = 5){
	
	int i;
	
	for(i= 1; i<=n; i++){
		
		cout<<a;
	}
	
}


int main(){
	
	int n;
	
	cout<<"Enter the no of characters : ";
	cin>>n;
	
	Display('#', n);
	
	
}
