#include<iostream>
using namespace std;
// multi levl line inheritation 
class base
{
        private:
	   	    int a;
	   	    public:
			void input()
			{
				cout<<"Enter values of base class";
				cin>>a;
			}
			void show()
			{
				cout<<"A= "<<a<<endl;
			}
			    
};
class derive1:public base
{
	private:
		int b;
		public:
		void input1()
	   {
	   
		cout<<"Enter values of derive class";
		cin>>b;
	  }
	  void show1()
	  {
	  	cout<<"b= "<<b<<endl;
	  }
};
class derive2:public derive1
{
	private:
		int c;
		public:
		void input2()
	   {
	   
		cout<<"Enter values of derive class";
		cin>>c;
	  }
	  void show2()
	  {
	  	cout<<"c= "<<c<<endl;
	  }
};
int main()
{
	base obj;
	obj.input();
	obj.show();
	
	derive1 obj1;
	obj1.input1();
	obj1.show1();
	
	derive2 obj2;	
	obj2.input2();
	obj2.show2();
	
	return 0;
}


