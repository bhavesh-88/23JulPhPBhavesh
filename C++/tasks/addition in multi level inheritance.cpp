#include<iostream>
using namespace std;

// multi level inharitance
// parents class
class A
{
  public:
	int a;
};

//child class
class B: public A
{
	public:
	 int b;
};

class C: public B
{
	public:
	  void add()
	  {
	  	cout<<"Enter two number ";
	  	cin>>a>>b;
	  	
	  	cout<<"Addition = "<<a+b;
	  }
};

int main()
{
	C obj;
	obj.add();
	
	return 0;
}



 
