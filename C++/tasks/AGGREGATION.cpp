// Aggregation
//in c++ Aggregation is used to represent the HAS - A relationship between two obj;

//
#include<iostream>
using namespace std;

class Address
{
	public:
		string city;
		string state;
		int pin;
		
		Address (string city,string state,int pin)
		{
			this ->city=city;
			this ->state=state;
			this ->pin=pin;
			
		}
};
class student
{
	public:
		int id;
		string name;
		Address *address;
		
		student(int id,string name ,Address *address)
		{
			this ->id=id;
			this ->name=name;
			this ->address=address;
		}
		void display()
		{
			cout<<"ID = "<<id<<endl;
			cout<<"NAME = "<<name<<endl;
			cout<<"city = "<<address->city<<endl;
			cout<<"State = "<<address->state<<endl;
			cout<<"pin code = "<<address->pin<<endl;
		}
};
int main()
{
	Address obj("Ahemdabad","Gujarat",4546);
	student s(34,"sdd",&obj);
	s.display();
	
}
