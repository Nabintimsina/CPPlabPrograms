//WAP TO READ 2 NUMBERS FROM USER AND DISPLAY LARGEST USING CONCEPT OF OOP

#include<iostream>
using namespace std;

class largest{
	int n1,n2;
	public:
		void input(){
			cout<<"enter two number n1 and n2"<<endl;
			cin>>n1>>n2;
		}
		
		void large(){
			if(n1>n2){
				cout<<"the larger num is"<<n1;
			
			}else{
				cout<<"the larger number is"<<n2;
			}
		}
};
int main(){
	largest l;
	l.input();
	l.large();
	
	return 0;
	}
