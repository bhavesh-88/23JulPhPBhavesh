#include<iostream>
using namespace std;
class A{
    int a;
    public:
    //	A & setData(int a)
        void setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
	// this is a keyword which is a pointer which points to the obj which invoke the member function
	A obj;
	obj.setData(3);
	obj.getData();
	
	return 0;
}
