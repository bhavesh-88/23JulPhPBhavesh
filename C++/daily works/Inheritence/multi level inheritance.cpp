#include<iostream>
using namespace std;

// multi level inharitance
class A
{
  public:
	void displayA()
	{
	 	cout<<"this is class A "<<endl;
	}
};

class B: public A
{
	public:
	void displayB()
	{
		cout<<"this is class B "<<endl;
		
	}
};

class C: public B
{
	public:
	void displayC()
	{
		cout<<"this is class C "<<endl;
		
	}
};

int main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	
	return 0;
}

 
