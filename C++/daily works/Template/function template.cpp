#include<iostream>
using namespace std;

template <class T>      // function template
void show (T a,T b)
{
	cout<<"A "<<a<<"B "<<b<<endl;
}
int main()
{
	int p=18,q=34;
	char m='a',n='b';
	show(m,n);
	show(p,q);
}
