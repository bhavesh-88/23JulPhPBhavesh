//  overload any operator syntax - class_name operator op sign(class name obj)
//polymorphism operator overloading
#include<iostream>
using namespace std;

class Unique
{
	public:
		int a,b;
		
		Unique(int a1=0,int b1=0)
		{
			a=a1;
			b=b1;
		}
		
		// logic to overload operator
		Unique operator +(Unique obj)
		{
			Unique temp;
			
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			
			return temp;
		}
		
		void display()
		{
			cout<<"Addition =( "<<a<<" "<<b<<" )";
		}
};
int main()
{
	Unique obj1(1,2), obj2(3,4);
	Unique obj3=obj1+obj2;
	obj3.display();
}

