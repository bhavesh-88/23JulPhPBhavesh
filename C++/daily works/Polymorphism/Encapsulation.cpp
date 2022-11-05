#include<iostream>
using namespace std;
class A
{
	int a,b;
	  public:
	  	void show()
	  	{
	  		cout<<"Enter two number";
	  		cin>>a>>b;
	  		cout<<a<<" "<<b<<endl;
		}
		void sum()
		{
			cout<<"Enter two number";
	  		cin>>a>>b;
	  		cout<<"sum=  "<<a+b<<endl;
		}
	  	
};
int main()
{
	A obj;
	obj.show();
	obj.sum();
}
