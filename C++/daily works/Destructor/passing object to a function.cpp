#include<iostream>
using namespace std;

class A
{
	public :
		int a,b;
		 
		 void display(A op)
		 {
		 	cout<<"A = "<<op.a;
		 	cout<<"B = "<<op.b;
		 }
};

int main()
{
	A obj;
	obj.a=4;
	obj.b=8;
	obj.display(obj);
	return 0;
}
