//matrix multiplication for "*" operator overloading for 2*2 matrix
#include<iostream>
using namespace std;
class matrix
{
	int a[2][2];
	public:
		void input()
		{
			cout<<"enter the elements for matrix"<<endl;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					cin>>a[i][j];
					
				}
			}
		}
		void display()
		{
			for(int i=0;i<2;i++)
			{
			for(int j=0;j<2;j++)
			{
				cout<<a[i][j]<<endl;
			}
			}
		}
		matrix operator * (matrix m)
		{
			matrix b; 
		
				for(int i=0;i<2;i++)
			{
			for(int j=0;j<2;j++)
			{
				b.a[i][j]=0;
				
				for(int k=0;k<2;k++)
			{
				b.a[i][j]+=a[i][k]*m.a[k][j];
		}
		}
		}
		return b;
	}
	
		};
		int main()
		{
			matrix m1,m2,result;
			m1.input();
			m2.input();
			result=m1*m2;
			result.display();
			return 0;		
			}
