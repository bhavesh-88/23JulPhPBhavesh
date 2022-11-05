#include<iostream>
using namespace std;

class Base
{
	int Data1;    // this is private not ineritenceS
	
	public:
		int Data2;
		void setdata();
		int getdata1();
		int getdata2();
};
 void Base ::setdata(void)
{
	Data1 =10;
	Data2 =20;
}
int Base :: getdata1()
{
	return Data1;
}
int Base :: getdata2()
{
	return Data2;
}

class Derived :public Base
{
	
	int Data3;
	public :
		void process();
		void display();
		
};
void Derived:: process()
{
	Data3 = Data2*getdata1();
}
void Derived :: display()
{
	cout<<"value of data1 is = "<<getdata1()<<endl;
	cout<<"value of data1 is = "<<Data2<<endl;
	cout<<"value of data1 is = "<<Data3<<endl;
}
int main()
{
	Derived obj;
	obj.setdata();
    obj.process();
    obj.display();
}
