#include<iostream>
using namespace std;

class fun
{
	public:
		inline float Mul(float x,float y)
		{
			return (x*y);
		}
		inline float Cube(float x)
		{
			return (x*x*x);
		}
};
int main()
{
	fun obj;
	float a,b;
	cout<<"Enter two values";
	cin>>a>>b;
	
	cout<<"MULTIPLICATION VALUE IS :\n"<<obj.Mul(a,b);
	
	cout<<"\n----------------------------------\n";
	
	cout<<"CUBIC VALUE IS :\n"<<obj.Cube(a);
	
	
}
