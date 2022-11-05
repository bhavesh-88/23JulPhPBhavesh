#include<iostream>
using namespace std;
// virtual base class
// only one copy of parent class created

class A
{
	public:
		void display1()
		{
			cout<<"class A"<<endl;
		}
};
class B: virtual public A
{
	public:
		void display2()
		{
			cout<<"class B"<<endl;
		}
};
class C: virtual public A
{
	public:
		void display3()
		{
			cout<<"class C"<<endl;
		}
};
class D: public B,public C
{
	public:
		void display4()
		{
			cout<<"class D"<<endl;
		}
};
int main()
{
	D obj;
	obj.display1();
	obj.display2();
	obj.display3();
	obj.display4();
}
