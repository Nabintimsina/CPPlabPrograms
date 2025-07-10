 /* create a class first with data member data1 and another class  */
 #include<iostream>
 using namespace std;
 class second;
 class first
 {
 	int data1;
 	public: void input()
 	{
 		cin>>data1;
 	} 
	 
	 
	 friend void compare(first,second);
	 };
 class second
 {
 	int data2;
 	public: void input()
 	{
 		cin>>data2;
	 }
friend void compare(first,second);
 };
	 
	 
 void compare(first f,second s)
{
	if(f.data1>s.data2)
	{
		cout<<" a is greater and a-b="<<f.data1-s.data2<<endl;
		
	 }
	 else{
	 	cout<<" b is greater and b-a="<<s.data2-f.data1<<endl;
	 }
}
	 
	 int main()
	 {
	 	first a;
	 	second b;
	 	a.input();
	 	b.input();
		compare(a,b); 
		 	 	return 0;
	 	
	 }
