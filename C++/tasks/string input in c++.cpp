#include<iostream>
using namespace std;
// string input in c++

int main()
{
	char str[20];
	
	cout<<"Enter a string";
//	cin>>str;
	gets(str);
	
	cout<<"name is = "<<str;
	
	return 0; 
}
