#include<iostream>

using namespace std;

class A
{
	private:
		string name;
		
		public:
			void input();
			void display();
		
		
};
void A::input()
{
	cout<<"Enter name:";
	cin>>name;
}
void A::display()
{
	cout<<"name="<<name;
}
int main()
{
	A apple;
	apple.input();
	apple.display();
	
	return 0;
}

