static
//1.  static data member
//2.  static member function

// data member share memory for all obj of the class
// single copy creat
// static data member default value is zero
// retain its value

// member funtion
// access only static data member
// without obj access static member in scope resolution

#include<iostream>
using namespace std;


class 
{
	int a;
	static int b;
	public:
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<" "<<b;
		}
		static void disp()
		{
			cout<<b;  // a is not accessable
		}
};
int A::b=0;
int main()
{
	A obj(10,45),obj2(87,78);
	obj.show(); 10 45
	obj2.show();87 78
	A::disp();   78
	obj.show();10 78
}



