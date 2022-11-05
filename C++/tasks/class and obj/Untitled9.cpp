#include<iostream>
using namespace std;
// single line inheritation 
class base
{
        private:
	   	    int a,b;
	   	    public:
			void input()
			{
				cout<<"Enter values";
				cin>>a>>b;
			}
			void show()
			{
				cout<<"A= "<<a<<" "<<"b= "<<b<<endl;
			}
			    
};
class derive:public base
{
	private:
		int m,n;
		public:
		void getdata()
	   {
	   
		cout<<"Enter values";
		cin>>m>>n;
	  }
	  void display()
	  {
	  	cout<<"m= "<<m<<" "<<"n= "<<n<<endl;
	  }
};

int main()
{
	base obj;
	derive obj1;
	obj.input();
	obj.show();
//	obj1.input();
//	obj1.show();	
	obj1.getdata();
	obj1.display();
	
	return 0;
}


