// pollymorphism 
// 1. over loading   -  campiletime
// 2. overriding    - run time
//1. function overloading
// 2. operator overloading
// 1. function overriding


// 1. function overloading
#include<iostream>
using namespace std;

class Sample
{
	public:
		void display()
		{
			cout<<"class A"<<endl;
		}
		void display(int a)
		{
			cout<<"A= "<<a<<endl;
		}
		void display(string n1,string n2)
		{
			cout<<"hello"<<n1<<" "<<n2<<endl;
		}
};

int main()
{
	Sample obj;
	obj.display();
	obj.display(29);
	obj.display("xyz","abc");
	
	return 0;
}



