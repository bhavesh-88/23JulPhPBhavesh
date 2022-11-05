/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

#include<iostream>
using namespace std;

class Test
{
	int a;
	int b;
	
	public:
		Test(int i,int j) : a(i), b(j)
	//	Test(int i,int j) : a(i), b(i+j)
	//	Test(int i,int j) : a(i), b(2*j)
	//	Test(int i,int j) : a(i), b(a+j)
	///	Test(int i,int j) : a(i), b(j), a(i+b)  -----red flage  this will  create
	//	problem because  a will be int firts
		{
			cout<<"constructor ezecuted "<<endl;
			cout<<"value is a ;"<<a<<endl;
			cout<<"value is b ;"<<b<<endl;
		}
};
int main()
{
	Test obj(3,6);
	
	return 0;
}
