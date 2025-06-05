#include<iostream>
using namespace std;
int &temp(int &a, int &b){
	if (a>b) {
		return a;
	}else
	{return b;
	}

}

int main(){
int	a = 40;
int	b =20;
int c;
	
	c=temp(a,b);
	cout<<"before"<<a<<b<<endl;
	temp(a,b)=100;
	cout<<a <<"  "<<b<<endl;
	return 0;
		
}
