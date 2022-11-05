#include<iostream>
using namespace std;

class student
{
	protected :
		int roll_number;
		public:
			void set_roll_number(int );
			void get_roll_number(void);
};
void student :: set_roll_number(int r)
{
	roll_number =r;
}
void student :: get_roll_number()
{
	cout<<"The roll number is "<<roll_number<<endl;
}
class Exam :public student
{
	protected :
		float maths;
		float computer;
		public:
			void set_marks(float ,float);
			void get_marks(void);
};

void Exam::set_marks(float m1,float m2)
{
	maths =m1;
	computer =m2;
}
void Exam::get_marks()
{
	cout<<"The marks obtained in maths are : "<<maths<<endl;
	cout<<"The marks obtained in computer are : "<<computer<<endl;
}
class Result:public Exam
{
	float percentage;
	public:
		void display_result()
		{
			get_roll_number();
			get_marks();
			cout<<"your result is "<<(maths+computer)/2<< "%" <<endl;
		}
};
int main()
{
	Result bhavesh;
	bhavesh.set_roll_number(234);
	bhavesh.set_marks(45.5,89.3);
	bhavesh.display_result();
	
	return 0;
}
