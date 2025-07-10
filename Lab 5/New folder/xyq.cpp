#include<iostream>
#include<string.h>
using namespace std;
class sports;
class education
{
	int roll,g1,g2;
	char name[50];
	public:
		void input()
		{
			cout<<"enter data of student"<<endl;
			cin>>name;
			cin>>roll;
			cin>>g1;
			cin>>g2;
		}
		friend class sports;
};
class sports
{
	char name[50];
	int roll;
	public:
		void input()
		{
				cout<<"enter data of student"<<endl;
				cin>>name;
				cin>>roll;
		}
		
		
		friend class education;
		void check(education e)
		{
			if(strcmp(name,e.name)==0 && roll==e.roll){
				if(e.g1>=40 && e.g2>=40){
					cout<<name;
					cout<<roll;
				}
			}
		}
};
int main()
{
	education e[6];
	sports s[4];
	for(int i=0;i<3;i++)
	{
		e[i].input();
	}
    	for(int i=0;i<2;i++)
	{
		s[i].input();
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++){
			s[j].check(e[i]);
		}
	}


}
