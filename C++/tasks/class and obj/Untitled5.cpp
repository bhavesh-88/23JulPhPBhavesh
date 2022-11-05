#include<iostream>
// incapsulation it is the process of wrapping up data upto single unit

// single unit our class
using namespace std;

class A
{
	public:
		int a;
		
		// getter this is method in encapsulation use to get the value of a variable,
		// setter this is method in encapsulation use to set the value of a variable,
		void getdata(int i)
		{
			a=i;
		}
		
		void setdata()
		{
			cout<<"A="<<a;
		}
		
		
};
int main()
{
	A apple;
	apple.getdata(23);
	apple.setdata();
	
	return 0;
}

