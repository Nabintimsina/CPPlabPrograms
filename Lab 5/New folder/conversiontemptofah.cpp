/*wap that converts temp in degree centigrade t degree farenheit and vice versa using basic concept of class and objects, make separate classes for c and f which has private
 member to hold value and add conversion function in each class from centi to fah*/
 #include<iostream>
 using namespace std;
 class conv1
 {
 	int degree;
 	public: 
 	
	 void input()
 	{
 		cout<<"enter temp in celsius"<<endl;
 		cin>>degree;	 
	}
	
	 void calculate()
	 {
	float f=(degree*9/5)+32;
	 	cout<<"in fah="<<f<<endl;
	 
	 }
	 };
 class conv2
 {
 	int fah;
 	public: 
 	
	 void input()
 	{
 		cout<<"enter temp in fah"<<endl;
 		cin>>fah;	 
	}
	
	 void calculate()
	 {
	float c=(fah-32)*5/9;
	 	cout<<"in fah="<<c<<endl;
	 
	 }
	 };


 int main()
 {
 	conv1 a;
	 conv2 b;
// 	a.input();
 	b.input();
 	b.calculate();
 	return 0;
 }
 
