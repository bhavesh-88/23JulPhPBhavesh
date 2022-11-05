#include<iostream>
using namespace std;
// addition two number using class and obj

class A
{
	private:
		int a,b;
		public:
		void input()
		{
			cout<<"Enter two values ";
			cin>>a>>b;
		}
		void show()
		{
			cout<<"A ="<<a+b<<endl;
		}
};
class B: virtual public A
{	
};
class C: virtual public A
{

};
class D: public B,public C
{
	
};
int main()
{
	// creation of an object

    A obj; B obj1; C obj2; D obj3;	
	
	obj.input();
	obj.show();
	
	obj1.input();
	obj1.show();
	
	obj2.input();
	obj2.show();
	
	obj3.input(); // virtual
	obj3.show();
	return 0;
	
}
