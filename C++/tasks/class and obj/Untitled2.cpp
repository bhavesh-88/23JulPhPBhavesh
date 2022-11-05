#include<iostream>
using namespace std;
// addition two number using class and obj

class A
{
	public:
		int a,b;
		void add()
		{
			cout<<"Addition ="<<a+b;
		}
};
int main()
{
	// creation of an object
	
	A obj;
	obj.a=17;
	obj.b=3;
	obj.add();
	
	return 0;
	
}
