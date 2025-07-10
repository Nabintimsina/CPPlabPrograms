// wap that counts the number of object createduse constructor and destructor to display the  objectno created and destroyed
#include<iostream>
using namespace std;
class abc
{
	static int count;
	int n;
	public:
		abc()
		{
			++count;
			n=count;
			cout<<"object"<<n<<"is created"<<endl;
			}
			~abc()
			{
				cout<<"object"<<n<<"is destroyed"<<endl;
			}
		};
int abc::count=0;
int main()
{
	{
		abc A1,A2,A3;
	
}
 abc B1,B2;
 
 return 0;
	}
