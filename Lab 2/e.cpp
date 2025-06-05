#include<iostream>


using namespace std;


int main(){
	
	int *arr, n, sum = 0, i;
	float average; 
	
	cout<<"Enter the no of elements : ";
	cin>>n;
	
	arr = new int[n];
	
	
	cout<<"Enter the numbers : ";
	
	for(i = 0; i<n; i++ ){
		
		cin>>arr[i];
		
	}
	
	for(i = 0; i<n ; i++){
		
		sum += arr[i];
	}
	
	average = static_cast<float>(sum) / n;
	
	cout<<"Sum is "<<sum<<endl;
	 
	cout<<"Average is "<<average; 
	
	
	delete[] arr;
	
	
}



