#include<iostream>
using namespace std;
// addition two number using class and obj

class base
{
	private:
		int a,b;
		public:
		void input()
		{
			cout<<"Enter two values ";
			cin>>a>>b;
		}
		void show()
		{
			cout<<"Sum= "<<a+b<<endl;
		}
};
class derive1:public base
{
	private:
		int A;
		public:
		void input1()
		{
			cout<<"Enter values for derive 1";
			cin>>A; 
		}
		void show1()
		{
			cout<<"A="<<A<<endl;
		}
};
class derive2:public base
{
	private:
		int B;
		public:
		void input2()
		{
			cout<<"Enter values for derive B";
			cin>>B; 
		}
		void show2()
		{
			cout<<"B="<<B<<endl;
		}
};
int main()
{
	// creation of an object
	
	derive1 obj1;
	derive2 obj2;
	
	obj1.input();
	obj1.show();
	
	obj1.input1();
	obj1.show1();
	
	//obj2.input();
	//obj2.show();
	
	obj2.input2();
	obj2.show2();
	return 0;
	
}
