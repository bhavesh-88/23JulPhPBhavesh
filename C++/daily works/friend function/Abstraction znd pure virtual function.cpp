// Abstraction
// in C++ we can achive abstraction using pure virtual function
// pure virtual functiion : it is function with no function body

#include<iostream>
using namespace std;

class A
{
	public:
		int a=34;
		
		// declare pure virtual function
		virtual void display() =0;
};
class B: public A
{
	public:
		
		// defination of pure virtual function
		void display()
		{
			cout<<"A ="<<a;
		}
};
int main()
{
	B obj;
	obj.display();
	
	return 0;
}

