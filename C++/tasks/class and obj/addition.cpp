#include<iostream>
using namespace std;
// public  1 inside  class 2 outside of class
class Add
{
        public:
	   	    int a,b,c;
	   	    
			void input()
			{
				
				cout<<"Enter two number ";
				cin>>a>>b;
			}
			 void sum()
			{
				c=a+b;
			}
			void show()
			{ 
				cout<<c;
			}   
};

int main()
{
	Add obj;
	obj.input();
	obj.sum();
	obj.show();
	
	
	return 0;
}


