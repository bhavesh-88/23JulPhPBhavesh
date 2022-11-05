#include<iostream>
using namespace std;
// factoriale number in c++

int main()
{
	int i,n,f=1;
	
	cout<<"Enter a number";
	cin>>n;
	for(i=0;i<n;i++)
	{
		f=f*i;
	}
	cout<<"fact is ="<<f;
}
