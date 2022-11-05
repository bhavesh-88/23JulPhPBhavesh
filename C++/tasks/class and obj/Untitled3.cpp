#include<iostream>
using namespace std;
// addition two number using class and obj

class A
{
	public:
		int a,b;
		int add()
		{
			cout<<"Addition ="<<a+b;
		}
};
class B
{
	public:
		void display()
		{
			cout<<"this is class B"; 
		}
};
int main()
{
	// creation of an object
	
	A obj;
	B obj1;
	obj.a=17;
	obj.b=3;
	obj.add();
	//obj.display();
	return 0;
	
}
