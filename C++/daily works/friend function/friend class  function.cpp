#include<iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
	public:
		int add(int a, int b)
		{
			return (a+b);
		}
		int sumComplex(Complex, Complex);
		int sumRealComplex(Complex,Complex);
	    //int sumcomplex(complex a1, complex a2)
		//{
		//	return (a1.a+a2.b);
	   //}
	   //int sumrealcomplex(complex a1, complex a2)
	   //{
	   //	return (a1.a+a2.b);
	   //}
};

class Complex
{
	int a,b;
	friend int Calculator:: sumComplex(Complex , Complex );
    friend int Calculator::sumRealComplex(Complex , Complex );
	
	// Individually declaring functions as friends

    // Aliter: Declaring the entire calculator class as friend
   //  friend class Calculator;

	public:
		void setnumber(int c ,int d)
		{
			c=a;
			d=b;
		}
		void printnumber()
		{
			cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
		}
};

int Calculator :: sumComplex(Complex a1, Complex a2)
{
	return (a1.a+a2.a);
}
int Calculator :: sumRealComplex(Complex a1, Complex a2)
{
	return (a1.a+a2.a);
}

int main()
{
	Complex b1,b2;
	b1.setnumber(2,4);
	b2.setnumber(4,7);
	
	Calculator calc;
	int res= calc.sumComplex(a1,a2);
	cout<<"The sum of real part of o1 and o2 is " << res << endl;
	
    int resc= calc.sumRealComplex(a1,a2);
	cout<<"The sum of complex part of o1 and o2 is " << resc << endl;
}



