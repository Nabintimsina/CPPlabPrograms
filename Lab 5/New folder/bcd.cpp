#include<iostream>
using namespace std;
class second;
class first
{
	int data1;
	public:
	
	first(int a=0)
	{
		data1=a;
	}
	
	
	friend void compare(first,second) ;
};
class second
{
	int data2;
		public:
		
	second(int b=0)
	{
		data2=b;
	}
friend void compare(first,second) ;
};

	void compare(first f,second s)
	{
		if(f.data1>s.data2)
		{
			cout<<f.data1-s.data2<<endl;
		}
		else 
		cout<<s.data2-f.data1<<endl;
	}
	
	
int main()
{
 first a(5);
 second b(6);
 compare(a,b);
	
}
