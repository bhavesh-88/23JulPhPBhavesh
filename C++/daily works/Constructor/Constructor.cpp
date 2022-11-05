#include<iostream>
using namespace std;

class Sample
{
	public :
		Sample()        // default constructor
		{
			cout<<"It is not class \n this is constructor"<<endl;
		}
		
};
int main()
{
	Sample obj;
	Sample obj1;
	
	return 0;
}
