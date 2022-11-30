#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		int roll;
		void display()
		{
			cout<<"-------- Date of Batch result----------";
			cout<<endl<<endl<<"Enter Roll number :";
			cin>>roll;
		}
};
class test
{
	public:
		int maths,science;
		void display1()
		{
			cout<<"Each subject is of 100 marks;";
			cout<<"marks obtained in maths "<<endl;
			cin>>maths;
			cout<<"marks obtained in science :"<<endl;
			cin>>science;
		}
};
class Result : public Student,public test
{
	public:
		void display2()
		{
			cout<<endl<<"--------------Data inserted--------------";
			cout<<endl<<"Roll number of student :"<<Student ::roll;
			cout<<endl<<"Total marks obtained :"<<test::maths+test::science;
		}
};
int main()
{
   Result obj;
   obj.display();
   obj.display1();
   obj.display2();	
}
