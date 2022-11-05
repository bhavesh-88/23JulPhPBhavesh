#include<iostream>
using namespace std;

class A
{

	   	     int a,b;
	   	    public:
			void input()
			{
				cout<<"Enter two values";
				cin>>a>>b;
				cout<<a<<" "<<b;
			}
			
			void show()
			{
				cout<<a<<" "<<b<<endl;
			}
			    
};
int main()
{
	A obj;
	obj.input();
}
