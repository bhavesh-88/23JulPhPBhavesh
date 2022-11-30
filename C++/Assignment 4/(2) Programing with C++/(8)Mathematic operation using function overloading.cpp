// function overlloading
#include<iostream>
using namespace std;

class A
{

	public:
		int operators(int x, int y)
		{
			
			cout<<"Add of given two number : "<<x+y<<endl;
			
			//return x+y;
		}
		void operators(int x, int y)
		{
			
			cout<<"Sub of given two number : "<<x-y<<endl;
			
		//	return x-y;
		}
		void operators(int x, int y)
		{
			
			cout<<"product of given two number : "<<operators(x,y)<<endl;
			
			return x*y;
		}
		void operators(int x, int y)
		{
			
			cout<<"division of given two number : "<<operators(x,y)<<endl;
			
			return x/y;
		}
};
int main()
{
	A obj;
	obj.operators(12,45);
	obj.operators(45,12);
	obj.operators(12,12);
	obj.operators(100,5);
}
