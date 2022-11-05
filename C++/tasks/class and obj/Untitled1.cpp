#include<iostream>
using namespace std;
// creation of class

class A
{
	public:
		int a;
		void display()
		{
			cout<<"A ="<<a;
		}
};
int main()
{
	// creation of an object
	
	A obj;
	obj.a=17;
	obj.display();
	
	return 0;
}
