#include<iostream>
using namespace std;
int sum(int *a);
int main(){
	int i , s;
	int *p;
	float avg;
	
	p = new int[10];
	cout<<"enter a number";
	for(i=0; i<10 ;i++){
		cin>>p[i];
	}
	s=sum(p);
	avg=static_cast <float>(s)/i;
	cout<<"the average is :"<<avg;
 
 delete[]p;
 return 0;
}

int sum(int *a){
	int i, s=0;
	for(i=0;i<10;i++){
		s=s+a[i];
	}
	return s;
}
