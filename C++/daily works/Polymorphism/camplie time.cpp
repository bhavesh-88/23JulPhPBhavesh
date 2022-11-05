// camplitime 
#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void show(int x, int y)
		{
			a=x; b=y;
			cout<<a<<" "<<b<<endl;
		}
		void show(float x, float y)
		{
			a=x, b=y;
			cout<<a<<" "<<b<<endl,;
		}
};
int main()
{
	A obj;
	obj.show(12,45);
	obj.show(45.22,12.23);
}
