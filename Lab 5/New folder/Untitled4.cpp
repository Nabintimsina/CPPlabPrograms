//b
#include<iostream>
using namespace std;
class centigrade
{
	float c;
	public: centigrade(int a=0){c=a;}
	float returnval(){return c;}
};
class Fahrenheit
{
	float f;
	public: Fahrenheit(float a=0){f=a;}
	Fahrenheit (centigrade x)
	{
	float c= x.returnval();
	f=(c * 9/5)+32;
	}
	void display(){cout<<"Temp in fahrenheit:"<<f<<endl;}
};

int main()
{
	centigrade C(100);
	Fahrenheit F;
	F = C;
	F.display();
	return 0;
}
