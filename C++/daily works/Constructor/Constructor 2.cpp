 //Types of constructor 
 //1. Default constructor
 //2. parameterized constructor
 // 3. copy constructor
 //Adapt the behaviour of another constructor
 
 #include<iostream>
 using namespace std;
 
 class Sample
 {
 	public:
 		int p,q;
 		
 		// Default constructor  no perameter
 		Sample()
 		{
 			cout<<"this is constructor"<<endl;
		 }
		
		// perameterized constructor
		Sample(int a, int b)
		{
			cout<<"Addition = "<<a+b;
		}
		
		// copy constructor   // classname(classame & ref variables)
		Sample(Sample &obj)
		{
			cout<<"p= "<<obj.p<<endl;
			cout<<"q= "<<obj.q;
		}
 };
 int main()
 {
 	Sample obj;
 	Sample obj1(4,1);
 	Sample copy(obj1);   // sample obj2=obj1; // Sample obj2(obj1);
 	
 	return 0;
 }
 
 
 
 
 
