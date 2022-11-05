#include<iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i 

class Complex
{
	int a,b;
	public:
		void setnumber(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		//  // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
	    friend Complex sumComplex(Complex o1, Complex o2);
		void printnumber()
		{
			cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
		}
	
};
Complex sumComplex(Complex o1,Complex o2)
{
	Complex o3;
	o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumComplex(c1, c2);
    sum.printnumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/



class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}

int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}




