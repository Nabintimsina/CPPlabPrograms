#include<iostream>

using namespace std;

class Time
{
	int second, minute;
	
	public:Time(){ }
	
	Time(float x)
	{
		minute = (int)x * 60;  
		second = (x - minute/60)*3600;
		if(second>=60)
		{
			minute = minute + second/60;
			second= second%60;
		}
	}
	void display(){
		cout<<"Hour to Members:"<<minute<<" mins,"<<second<<" sec"<<endl;
	}
	
};

int main()
{

	Time t;
	float hr=2.4;
	t=hr;
	t.display();
	
	
	return 0;
}
