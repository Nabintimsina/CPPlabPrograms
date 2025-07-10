#include<iostream>
using namespace std;
class weight
{
	float kg,gram;
	public:weight(int a=3,int b=400)
	{
		kg=a;
		gram=b;
		kg=kg+gram/1000;
	}
		void display()
		{
			cout<<kg<<"kg"<<endl;
		}
	int  operator >=(weight a)
	{
		if(kg>=a.kg)
		{
		return 1;	
		}
		else
		{
		return 0;	
		}
	}
	
};
int main()
{
	weight w1,w2(4,900);
	w1.display();
	w2.display();
	if(w1>=w2)
	{
		cout<<"w1 is greater than =w2";
	}
	else cout<<"w2 is greater than =w1";
	
}


