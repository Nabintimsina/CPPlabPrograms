#include<iostream>

using namespace std;

class Time
{
	float second, minute;
	
	public:Time(float a=0,float b=0){
		second=a;minute=b;
	}
	operator float()
	{
		float a;
		
		a=(minute/60)+(second/3600);
		
		return a;
	}
	
};

int main()
{
	Time t(60,120);
	float hr;
	hr=t;
	cout<<"Object to Single Hour:"<<hr<<endl;
	return 0;
}
