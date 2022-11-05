#include<iostream>
using namespace std;

// multiple level inharitance
class A
{
  public:
	int add(int a,int b)
	{
	 	return a+b;
	}
};
class B
{
	public:
	int mul(int p,int q)
	{
		return p*q;
		
	}
};
class C:public A,public B
{
	public:
	void display()
	{
		cout<<"Addition : "<<add(12,2);
		cout<<"maltiplication : "<<mul(12,12);
	}
};

int main()
{
	C obj;
	obj.display();
	
	return 0;
}

