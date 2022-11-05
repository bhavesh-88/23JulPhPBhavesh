#include<iostream>
using namespace std;
 // heirarchical inheritance
class A
{
	public:
		void displayA()
		{
			cout<<"class A"<<endl;
		}
};
class B: public A
{
	public:
		void displayB()
		{
			cout<<"class B"<<endl;
		}
};
class C: public A
{
	public:
		void displayC()
		{
			cout<<"class C"<<endl;
		}
};
class D: public A
{
	public:
		void displayD()
		{
			cout<<"class D"<<endl;
		}
};
int main()
{
	B obj;
	C obj1;
	D obj2;
	
	obj.displayA();
	obj1.displayA();
	obj2.displayA();
	
	return 0;
		
}
