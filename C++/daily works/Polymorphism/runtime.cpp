// runtime

#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<" function overridng"<<endl;
		}
};
class B :public A
{
	public:
		void show()
		{
			cout<<" Hello"<<endl;
		}
};

int main()
{
	A *p;    B obj;
	p=&obj;
	p->show();   // function overriding
}





