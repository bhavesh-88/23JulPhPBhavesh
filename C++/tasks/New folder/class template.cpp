#include<iostream>
using namespace std;

template <class T>
class show      // class template
{
	T a, b;
	public:
	show(T p,T q)
	{
		a=p;
		b=q;
	}
	void dis()
	{
	 cout<<"A "<<a<<"B "<<b<<endl;	
	}
	
};
int main()
{
	
	show<int>obj(10,20);
	obj.dis();
}
