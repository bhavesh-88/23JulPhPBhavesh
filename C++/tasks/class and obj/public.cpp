#include<iostream>
using namespace std;
// public  1 inside  class 2 outside of class
class A
{
        public:
	   	    int a;
	   	    
			void show()
			{
				a=10; 
				cout<<"inside class"<<a<<endl;
			}
			    
};

int main()
{
	A obj;
	obj.show();
	obj.a=23;
	cout<<"outside class "<<obj.a;
	
	
	return 0;
}


