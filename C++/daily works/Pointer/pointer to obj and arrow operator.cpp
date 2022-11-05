#include<iostream>
using namespace std;

class Complex{
	int real,imaginary;
	public:
		void getdata(){
			cout<<"The real part is"<<real<<endl;
			cout<<"The iamaginary part is "<<imaginary<<endl;
		}
	    void setdata(int a,int b)
	    {
	    	real=a;
	    	imaginary=b;
		}	
	
};
int main()
{
//	Complex c1;
//	Complex *ptr = &c1;
//	(*ptr).setdata(4,67);
//	(*ptr).getdata();
	
	Complex *ptr = new Complex;
//	(*ptr).setdata(4,67);   // is exactly same as
   ptr->setdata(3,65);
//	(*ptr ).getdata(); is as good as
    ptr->getdata();


    // Arraay of object	
	Complex *ptr1 = new Complex[4];
	ptr1->setdata(4,67);
	ptr1->getdata();
	return 0;
}


