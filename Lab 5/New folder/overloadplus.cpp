//wap to overload plus operator to add
#include<iostream>
using namespace std;
class complexNum
{
	int real,img;
	public:complexNum(int x=0,int y=0)
 
 {
 	real=x;
 	img=y;
 	}
	
	  void display()
	  {
	  	cout<<real<<" + i"<<img;
	  }
	  
	  
	  complexNum operator+(complexNum c)
	  {
	  	complexNum A;
	  	A.real=real+c.real;
	  	A.img=img+c.img;
	  return  A;
	  
	  
	  }
	   } ;
	   int main()
	   {
	   	complexNum c1(5,4),c2(5,2),c3;
	   	c3=c1+c2;
	   	c3.display();
	   	return 0;
	   }
