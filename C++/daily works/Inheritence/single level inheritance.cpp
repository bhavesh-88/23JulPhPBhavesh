#include<iostream>
using namespace std;

// parents class
class A
{
  public:
	void displayA()
	{
	 	cout<<"this is class A "<<endl;
	}
};

//child class
class B: public A
{
	public:
	void displayB()
	{
		cout<<"this is class B "<<endl;
		
	}
};

int main()
{
	B obj;
	obj.displayA();
	obj.displayB();
	
	return 0;
}



 
