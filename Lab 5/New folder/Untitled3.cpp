//a
#include<iostream>

using namespace std;
class Fahrenheit
{
	float f;
	public: Fahrenheit(float a=0){f=a;
	}
	void display(){
		cout<<"Temp in fahrenheit:"<<f<<endl;
	}
};
class centigrade
{
	float c;
	public: centigrade(int a=0){c=a;
	}
	operator Fahrenheit()
	{
		float f;
		f=(c*9/5)+32;
		return Fahrenheit(f);
	}
};
int main()
{
	centigrade C(100);
	Fahrenheit F;
	F = C;
	F.display();
	return 0;
}
