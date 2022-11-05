//  how to declare a template
//syntax template<class/typename variable name>
//template<class T>
// class template
//function template
#include<iostream>
using namespace std;

template <typename T>
class A
	{
		public:
			T a,b;
			void input()
			{
				cout<<"Enter a";
				cin>>a;
				cout<<"Enter b";
				cin>>b;
			}
			void display()
			{
				cout<<"A = "<<a<<endl;
				cout<<"B = "<<b;
			}
	};

int main()
{
	cout<<"\n\n--------for integer-------\n";
	A<int>obj;
	obj.input();
	obj.display();
	
	cout<<"\n\n--------for float-------\n";
	A<float>obj1;
	obj1.input();
	obj1.display();
	
	cout<<"\n\n--------for string-------\n";
	A<string>obj2;
	obj2.input();
	obj2.display();
	
	
}

/*
//function template;
#include<iosream>
using namespace std;

template <typename T>
T mul(Ta,Tb,Tc)
{
	return a*b*c;
}
int main()
{
	cout<<"MULtiplication of integers :"<<mul<int>(2,4,5)<<endl;
	cout<<"MULtiplication of float :"<<mul<float>(2.2,4.4,5.5)<<endl;
}
*/


