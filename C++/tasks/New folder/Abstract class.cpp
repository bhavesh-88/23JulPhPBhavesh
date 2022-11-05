#include<iostream>
using namespace std;
// Abstract class---- atleast one pure virtual function
// we cant declare obj of abstract class
// pure virtual function which have no defination 
// strat with virtual keywords and end of 0;
// virtual viod show ()=0

class A
{
	public:
		virtual void show ()=0;
		void disp()
		{
			cout<< "base class";
		}
	
};
class B: public A
{
	public:
		void show ()
		{
			cout<<"derived class";
		}
};
int main()
{
	B obj;
	obj.disp();
	obj.show();
	
	A *p; B obj;
	p= &obj;
	p->disp():
	
	
}














