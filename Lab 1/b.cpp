#include<iostream>
#include<math.h>

using namespace std;

class Point{
	
	public:
		float x,y,z;
		
		float DistanceTo(Point p){
			
			return (sqrt(pow(p.x-this->x,2)+pow(p.y - y,2)+pow(p.z-z,2)));
		}
};

int main(){
	
	Point p1, p2;
	
	cout<<"Enter three cordinate of a point p1: ";
	cin>>p1.x>>p1.y>>p1.z;
	
	cout<<"Enter three cordinate of a point p2: ";
	cin>>p2.x>>p2.y>>p2.z;
	s
	cout<<"Distance is : "<<p1.DistanceTo(p2);
	
	
	
	
	
}
