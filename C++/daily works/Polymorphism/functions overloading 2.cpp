#include<iostream>
using namespace std;

int sum(int a,int b)
{
	cout<<"using functions with 2 arguments"<<endl;
	return a+b;
}
int sum(int a,int b, int c)
{
	cout<<"using functions with 3 arguments"<<endl;
	return a+b+c;
}
// calculate the volume of a cylinder
int volume(double r, int h)
{
	return (3.14*r*r*h);
}
// calculate the volume of a cube
int volume(int a)
{
	return (a*a*a);
}
// calculate the volume of a rectangular box
int volume(int l, int b, int h)
{
	return (l*b*h);
}
int main()
{
	cout<<"The sum of 6 and 4 is "<<sum(6,4)<<endl;
	cout<<"The sum of 6 and 4 and 5 is "<<sum(6,4,5)<<endl;
	cout<<"The volume of cylinder of radious 3 and height 6 is "<<volume(3,6)<<endl;
	cout<<"The volume of rectanguler box is "<<volume(6,4,5)<<endl;
	cout<<"The volume of cube is "<<volume(3)<<endl;
}
