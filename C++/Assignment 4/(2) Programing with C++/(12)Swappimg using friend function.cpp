#include<iostream>
using namespace std;

class Swap
{
	public:
	int a,b;
	
	public:
		friend void swap(Swap obj);
		
};
void swap(Swap obj)
{
//	int a,b;
//	obj.a=25;
//	obj.b=52;
obj.a=23;
obj.b=45;
	obj.a=obj.a+obj.b;
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
//	 a=a+b;
//	 b=a-b;
//	a=a-b;
	cout<<"Swapping numbers \n"<<"a :"<<obj.a
	    <<"b :"<<obj.b;
}
int main()
{
	Swap ob;
	swap(ob);
	
	return 0;
}

using namespace std;
 
class Swap {
 
    // Declare the variables of Swap Class
    int temp, a, b;
 
public:
 
    // Define the parameterized constructor, for inputs
    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
 
    // Declare the friend function to swap, take arguments
    // as call by reference
    friend void swap(Swap&);
};
 
// Define the swap function outside class scope
void swap(Swap& s1)
{
    // Call by reference is used to passed object copy to
    // the function
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
 
    // Swap operations with Swap Class variables
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
 
// Driver Code
int main()
{
    // Declare and Initialize the Swap object
    Swap s(4, 6);
    swap(s);
    return 0;
}

