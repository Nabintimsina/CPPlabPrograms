#include<iostream>
#include<math.h>
using namespace std;

class dist{
	float x,y;
	
	public:
	 void input(){
	 	cout<<"enter the value of x,y"<<endl;
	 	cin>>x>>y;
		
	}
	
	void calculate_dist(dist d){
		float dis;
		dis=sqrt(pow(d.x-x,2)+(pow(d.y-y,2)) );
		
		cout<<"the distance between two point is :"<<dis;
		
	}
};


int main(){
	dist d1,d2;
	d1.input();
	d2.input();
	
	d1.calculate_dist(d2);
	
	return 0;
	
	
	
}
