#include<iostream>
#include<math.h>

using namespace std;

class Point{
	
	private : 
		double x, y;
		
	public:
		void setCordinates(double xc, double yc){
			x= xc;
			y = yc;
		}
		
		double getX(){
			
			return x;
		}
		
		double getY(){
			
			return y;
		}
	
};

int main(){
	
	Point p1, p2;
	double x1, y1, y2, x2;
	
	cout<<"Enter three cordinate of a point p1: ";
	cin>>x1>>y1;
	
	cout<<"Enter three cordinate of a point p2: ";
	cin>>x2>>y2;
	
	
	p1.setCordinates(x1, y1);
	p2.setCordinates(x2, y2);
	
	double dx = p2.getX() - p1.getX();
	double dy = p2.getY() - p1.getY();
	
	double dis = sqrt(dx*dx + dy*dy);
	
	cout<<"distance is : "<<dis;
	
	
}
