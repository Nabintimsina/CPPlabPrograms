#include<iostream>
using namespace std;

class rectangle{
 private:
	int l,b;
 public:
 	void input(){
 		cout<<"enter the length of the rectangle";
 		cin>>l;
 		cout<<"enter the breath of rectangle";
 		cin>>b;
	 }
	 
	 void area(){
	 	int result=l*b;
	 	cout<<"the area of the rectangle is"<<result<<endl;
	 }
	 
	 void perimeter(){
	 	int result=2* (l+b);
	 	cout<<"the perimeter of the rectangle is"<<result<<endl;
	 }
	
};

int main(){
	rectangle r1;
	r1.input();
	r1.area();
	r1.perimeter();
	
	return 0;
}
