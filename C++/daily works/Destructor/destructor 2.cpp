//(~) tilde sign memory deallocate
#include<iostream>
using namespace std;

class Sample
{
	public:
		Sample()
		{
			cout<<"constructor call"<<endl;
		}
		
		~Sample()
		{
			cout<<"destructor call "<<endl;
		}
		void display(int a,int b)
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
   Sample obj;     
   	
   	obj.display(12,45);
   	
   	Sample obj1;
   	obj1.display(34,56);
}
