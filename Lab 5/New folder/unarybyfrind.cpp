//wap to overload unary minus operator using friend function
#include<iostream>
using namespace std;
class unary_minus
{
		int value;
		public:
	    unary_minus(int v=0)
			{
			value=v;	
			}
friend unary_minus operator-(unary_minus n)
{
	n.value=-n.value;
}
void display()
{
 cout<<"the value is"<<value<<endl;
}
};
int main()
{
	unary_minus u1(20),u2;
	cout<<"original"<<endl;
	u1.display();
	cout<<"after using the operator"<<endl;
    u2=-u1;
	u2.display();
	return 0;
}
