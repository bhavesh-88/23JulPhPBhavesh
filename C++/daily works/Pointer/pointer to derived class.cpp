#include<iostream>
using namespace std;

class Baseclass{
	public:
		int var_base;
		void display()
		{
			cout<<"Dispalying base class vatiable var_base "<<var_base<<endl;
		}
};

class Derivedclass : public Baseclass
{
	public:
		int var_derived;
		void display()
		{
			cout<<"Dispalying base class vatiable var_base "<<var_base<<endl;
			cout<<"Dispalying derived class vatiable derived_base "<<var_derived<<endl;
		}
};
int main()
{
//	Baseclass *base_class_pointer;
//	Baseclass obj_base;
//	Derivedclass obj_derived;
//	base_class_pointer = &obj_derived;  // Pointing base class pointer to derived class
	
//	base_class_pointer->var_base =34;
//	base_class_pointer->derived_base =878;  // will throw errer
//	base_class_pointer->display();
	
//	base_class_pointer->var_base =90;
//	base_class_pointer->display();
	
	Derivedclass *derived_class_pointer;
	Derivedclass obj_derived;
	derived_class_pointer =&obj_derived;
	derived_class_pointer ->var_base= 575;
	derived_class_pointer ->var_derived =90;
	derived_class_pointer ->display();
	
}
