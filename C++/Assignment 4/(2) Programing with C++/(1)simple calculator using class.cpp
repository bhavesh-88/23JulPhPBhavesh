#include<iostream>
using namespace std;

class calculator
{
	float a,b;
	public:
		
		void input()
		{
			cout<<"Enter two numbers :"<<endl;
			cin>>a>>b;
		}
		
		float Sum()
		{
			return a+b;
		}
	    float Sub()
		{
			return a-b;
		}
		float Mul()
		{
			return a*b;
		}
		float Div()
		{
			return a/b;
		}
	
};
int main()
{
	int ch;
	
	calculator obj;
	
	    cout<<"Enter 1 to Addition";
	    cout<<"Enter 2 to Substraction";
	    cout<<"Enter 3 to Multiplication";
      	cout<<"Enter 4 to Division";
	    cout<<"Enter 0 to Exit";
	    
	do
	{
		
		cout<<"Enter your chioce";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.input();
				cout<<"Result = "<<obj.Sum()<<endl;
				break;
			case 2:
				obj.input();
				cout<<"Result = "<<obj.Sub()<<endl;
				break;
			case 3:
				obj.input();
				cout<<"Result = "<<obj.Mul()<<endl;
				break;
			case 4:
				obj.input();
				cout<<"Result = "<<obj.Div()<<endl;
				break;		
		}
		
	}while(ch >= 1 && ch <= 4);
	
	
	return 0;
}
