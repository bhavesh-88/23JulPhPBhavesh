
// inline function is the request to the compile (not the command) to make a function 
//as an inline function 

#include<Iostream>
using namespace std;

inline int fun(int a, int b)
{


	return(a>b)?a:b;
}
int main()
{
	
	//fun(10,20);
	cout<<"Maximum :"<<fun(10,30);
}
