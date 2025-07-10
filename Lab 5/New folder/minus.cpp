#include<iostream>
using namespace std;
class Minus
{
	int x;
	public:
	Minus(int a=0)
	{
		x=a;
	}
	void display()
	{
		cout<<x;
	}
	friend void operator -(Minus &a);
};
void operator -(Minus &a)
{	
a.x=-a.x;
;
}
int main()
{
	Minus m2(5);
	-m2;
	m2.display();
	return 0;
}
