//wap to overload an increment operator(++) in prefix notation
#include<iostream>
using namespace std;
class distance1
{
	int meter,cm;
	public: distance1(int a, int b)
	{
		meter=a;
		cm=b;
	}
	distance1()
	{
	}
	distance1 operator++()
	{
		distance1 D;
		D.meter=++meter;
		D.cm=++cm;
	if(D.cm>=100)
	{
		++D.meter;
		D.cm-=100;
		
		}	
return D;
}

void display()
{
	cout<<meter<<"m"<<cm<<"centimeter"<<endl;
}

};
int main()
{
	distance1 d1,d2;
	d2=++d1;
	d2.display();
	d1.display();
	return 0;
}
