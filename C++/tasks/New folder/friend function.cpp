#include<Iostream>
using namespace std;
class A{
	int a,b;
	public:
		void inputt()
		{
			cout<<"Enter two number:";
			cin>>a>>b;
		}
		friend void Add(A ob);
};

void Add(A ob)
{			
	int c;
	c=ob.a+ob.b;
	cout<<"sum ="<<c;
}

int main()
{
	
	A obj;
	obj.inputt();
	Add(obj);
}
