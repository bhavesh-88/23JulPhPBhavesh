#include<iostream>
using namespace std;
class Matrix
{
	int a[5],c[5];
	int b[5];
	int i;
	public:
		void accept();
		void display();
		void operator +(Matrix obj);
};
void Matrix :: accept()
{
	cout<<"Enter arrau element \n";
//	cout<<"Enter first array element \n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
//	cout<<"Enter second array element \n";
//	for(i=0;i<5;i++)
//	{
//		cin>>b[i];
//	}
	
}
void Matrix :: display()
{
	
	cout<<"first array are :\n ";
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
//	cout<<"second array are :\n ";
//	for(i=0;i<5;i++)
//	{
//		cout<<b[i];
	}
	
}
void Matrix :: operator +(Matrix obj)
{
	for(i=0;i<5;i++)
	{
//		c[i]= a[i]+obj.a[i]+b[i]+obj.b[i];
    	c[i] = a[i]+obj.a[i];
	}
	cout<<"Addition of two array is :"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<c[i];
	}
}
int main()
{
	
//	Matrix obj;
//	obj.accept();
//	obj.display();
//	obj+obj;

    Matrix a1,b1;
    a1.accept();
    b1.accept();
    cout<<"first array is:";
    a1.display();
    cout<<"second array is :";
    b1.display();
    a1+b1;

	return 0;
}
