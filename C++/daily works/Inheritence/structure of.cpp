#include<iostream>
using namespace std;

struct employes
{
	int uid;
	char favchar;
	float salary;
};
int main()
{
	struct employes bhavesh;
	struct employes suraj;
	struct employes roshan;
	
	bhavesh.uid= 1;
	bhavesh.favchar = 'c';
	bhavesh.salary = 12000000;
	cout<<"the value is "<<bhavesh.uid<<endl;
	cout<<"the value is "<<bhavesh.favchar<<endl;
	cout<<"the value is "<<bhavesh.salary<<endl;
}

