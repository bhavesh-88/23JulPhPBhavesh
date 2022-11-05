#include<iostream>
using namespace std;
// protected 1 base class 2 derive class
class base
{
        protected:
	   	    int a,b;
	   	    public:
			void show()
			{
				a=10; b=12;
				cout<<a<<ends<<b<<endl;
			}
			    
};
class derive:public base
{
	public:
		void display()
		{
		
		a=34; b=23;
		cout<<a<<ends<<b<<endl;
	    }
};

int main()
{
	derive obj;
	obj.show();
	obj.display();
	
	return 0;
}


