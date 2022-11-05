#include<iostream>
//  area of triangle and circle andrectangle using function and loop in c++
using namespace std;
int menu()
{
	int area,r;
	cout<<endl<<"enter the radious of a circle :";
	cin>>r;
	area= 3.14*r*r;
	cout<<"Area of circle : ";
}
int menu2()
{
	int h,b,a;
	cout<<endl<<"base in m:";
	cin>>b;
	cout<<"height in m:";
	cin>>h;
	a=0.5*b*h;
	cout<<"Area of triangle";
}
int menu3()
{
	int ar,l,w;
	cout<<endl<<"lenght in m :";
	cin>>l;
	cout<<"width in m :";
	cin>>w;
	ar=l*w;
	cout<<"Area of ractangle :"<<ar;
}
int main()
{
	int ch;
	cout<<"------------menu------------"<<endl;
	cout<<"1. circle"<<endl;
	cout<<"2. triangle"<<endl;
	cout<<"3. rectangle"<<endl;
	
	cout<<"enter choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			menu();
			break;
			
		}
		case 2:
		{
		  menu2();
		  break;		
		}
		case 3:
		{
			menu3();
			break;
		}
		default:
		{
			cout<<"invalid input";
		}
	}
	return 0;
}





