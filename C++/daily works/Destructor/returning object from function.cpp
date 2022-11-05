#include<iostream>
using namespace std;

class A
{
	public :
		int a=23,b=33;
		
};
A display()
{
	A obj;
	cout<<"A= "<<obj.a<<endl;
	cout<<"B = "<<obj.b<<endl;
	
	return obj;
}
int main()
{
	A obj;
	obj=display();
	
	return 0;
}

