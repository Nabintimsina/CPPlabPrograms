#include<iostream>
using namespace std;
class farenheit;
class celceius
{
	float c;
	public:
		celceius(float x=0)
	   {
		c=x;
	   }
	   friend class farenheit;
       void conversion(farenheit); 
	   };
class farenheit
{
	float f;
	public:
		farenheit(float y=0)
		{
			f=y;
		}
		friend class celceius;
		void conversion(celceius temp)
		{
			f=((temp.c)*(9.0/5.0))+32;
			cout<<temp.c<<"celceius="<<f<<"farenheit"<<endl;
		}
	};
	void celceius :: conversion(farenheit temp)
	 {
	
		c=(temp.f-32)*(5.0/9.0);
		cout<<temp.f<<"farenheit"<<"="<<c<<"celceius";
      }
      
      
      
	int main()
	{
		celceius c1(35);
		farenheit f1(46);
		f1.conversion(c1);
		c1.conversion(f1);
		return 0;
	}


