#include<iostream>
using namespace std;
// nested class
class A
{
            public:    
            class B   // member variable of class a
			{
				int a,b;
				public:
					void input()   //  member function of class b
					{
						 cout<<"Enter two values";
				          cin>>a>>b;
					}
			};
			void show()
			{
				cout<<a<<" "<<b<<endl;
			}
			    
};
int main()
{
	A::B obj;
	obj.input();
	obj.show();
}
