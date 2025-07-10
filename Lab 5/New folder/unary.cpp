//wap to overload unary minus operator using member function
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
void operator-()
{
	value=-value;
}
void display()
{
 cout<<"the value is"<<value<<endl;
}
};
int main()
{
	unary_minus u1(20);
	cout<<"original"<<endl;
	u1.display();
	cout<<"after using the operator"<<endl;
	-u1;
	u1.display();
	return 0;
}
