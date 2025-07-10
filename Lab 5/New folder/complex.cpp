#include<iostream>
using namespace std;
class Comcal
{
	int real,img;
	public:
		Comcal(int a=0,int b=0)
		{
			real=a;
			img=b;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		friend Comcal operator +(Comcal a,Comcal b );
};
		Comcal operator +(Comcal a,Comcal b)
		{
			Comcal c;
			c.real=a.real+b.real;
			c.img=a.img+b.img;
			return c;
		}

int main()
{
	Comcal c1(2,3),c2(4,5),c3;
	c3=c1+c2;
	c3.display();
	return 0;
	
}
