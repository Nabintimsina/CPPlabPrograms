//wap to overload >= operator for object of class weight in kg and gm
#include<iostream>
using namespace std;
class weight {
	int kg,gm;
	public: weight(int a=0, int b=0)
	{
		kg=a;
		gm=b;
	}
	void display()
	{
		cout<<kg<<"kg"<<gm<<"gm"<<endl;
		
	}
	operator >(weight w)
	{
		int tot1=kg*1000+gm;
		int tot2=w.kg*1000+w.gm;
		
	}
};
int main()
{
	weight w1(10,20), w2(30,50);
	if(w1>w2)
	{
		cout<<"the first is greater";
	}
	else 
	{
		cout<<"the second is greater";
	}
	return 0;
}
