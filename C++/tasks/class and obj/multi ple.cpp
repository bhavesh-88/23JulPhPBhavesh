#include<iostream>
using namespace std;
// multi levl line inheritation 
class base1
{
        private:
	   	    int a,b,c;
	   	    public:
			void input()
			{
				cout<<"Enter values of base class";
				cin>>a>>b;
			}
			void show()
			{
				c=a+b;
				cout<<"sum= "<<c<<endl;
			}
			    
};
class base2
{
	private:
		int a,b,c;
		public:
		void input1()
	   {
	   
		cout<<"Enter values of base 2 class";
		cin>>a>>b;
	  }
	  void show1()
	  {
	  	c=a-b;
	  	cout<<"sub= "<<c<<endl;
	  }
};
class derive:public base1,public base2
{
	private:
		int a,b,c;
		public:
		void input2()
	   {
	   
		cout<<"Enter values ";
		cin>>a>>b;
	  }
	  void show2()
	  {
	  	c=a*b;
	  	cout<<"multi= "<<c<<endl;
	  }
};
int main()
{
//	base1 obj;
//	obj.input();
//	obj.show();
	
//	base2 obj1;
//	obj1.input1();
//	obj1.show1();
	
	derive obj2;	
	obj2.input2();
	obj2.show2();

    obj2.input();
	obj2.show();
	
	obj2.input1();
	obj2.show1();	
	return 0;
}


