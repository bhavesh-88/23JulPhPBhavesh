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
		friend class B;
};
class B{
	int c;
	public:
		void Add(A ob)
		{
			c=ob.a+ob.b;
			cout<<"sum ="<<c;
		}
};
int main()
{
	A ob;
	B obj;
	ob.inputt();
	obj.Add(ob);
}
