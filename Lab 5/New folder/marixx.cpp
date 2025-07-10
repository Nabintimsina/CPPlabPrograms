#include<iostream>
using namespace std;
class multi
{
	int mat[2][2];
	public:void input()
        	{cout<<"enter matrix element"<<endl;
		     for(int i=0;i<2;i++)
		     {
		     	 for(int j=0;j<2;j++)
		     	 {
		     	 	cin>>mat[i][j];
				}
			 }
		   }
		   void display()
		   { cout<<"after multiplication ";
		   	 for(int i=0;i<2;i++)
		     {
		     	 for(int j=0;j<2;j++)
		     	 {
		     	 	cout<<mat[i][j]<<" ";
				}
				cout<<endl;
			 }
		   }
			multi operator *(multi m)
			{ 
			 multi mu;
			 for(int i=0;i<2;i++)
			{
			 	for(int j=0;j<2;j++)
		       { mu.mat[i][j]=0;
		     	 for(int k=0;k<2;k++)
		     	 {
		     	 mu.mat[i][j]+=mat[i][k]*m.mat[k][j];
				 }
			   }
		    }
		    return m;
            }
        	
};
			  
int main()
{
	multi a,b,c;
	a.input();
	b.input();
	cout<<"enter the element of matrix a";
	cout<<"enter the element of matrix b";
	c=a*b;
	cout<<" the element of matrix c is";
	c.display();
	return 0;
}
