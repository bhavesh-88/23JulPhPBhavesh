// function  overriding
#include<iostream>
using namespace std;
class Sample
{
	public:
		string name = "Hello";
		string display()
		{
			return name;
		}
};
class child :public Sample          //
{                                //
   public:                        //
     string name1="world";          // 
	 string display()           //              hello print
	 {                              //
	 	return name1;            //
	 	                      //
	  }	                    //
};                          //
int main()
{
	child obj;
	
//	cout<<"msg= "<<obj.display();   = // world
	cout<<"msg="<<obj.Sample::display()<<" "<<obj.display();   // hello world
	
	return 0;
}
