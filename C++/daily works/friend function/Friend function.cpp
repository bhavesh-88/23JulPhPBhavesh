// use to take access private data member
// friend function
#include<iostream>
using namespace std;

class parent
{
	int age;
	string name;
	
	public:
// private		// declaration of friend function
		friend void display(parent obj);
	
};
void display(parent obj)
{
	obj.age=23;
	obj.name="fdb";
	cout<<"Age ="<<obj.age<<endl;
	cout<<"name = "<<obj.name;
}
int main()
{
	parent op;
	display(op);
	return 0;
}



