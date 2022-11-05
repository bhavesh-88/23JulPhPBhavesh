#include<iostream>
using namespace std;

class Bankdeposit
{
	int principal;
	int years;
	float interestRate;
	float returnValue;
	
	public:
		Bankdeposit(){}
		Bankdeposit(int p,int y, float r);
		Bankdeposit(int p,int y,int r);
		
	void show();
};

Bankdeposit :: Bankdeposit(int p,int y,float r)
{
	principal =p;
	years=y;
	interestRate =r;
	returnValue = principal;
	for(int i=0; i<y;i++)
	{
		returnValue = returnValue * (1+interestRate);
	}
}
Bankdeposit :: Bankdeposit(int p,int y,int r)
{
	principal =p;
	years=y;
	interestRate =float(r)/100;
	returnValue = principal;
	for(int i=0; i<y;i++)
	{
		returnValue = returnValue * (1+interestRate);
	}
}
void Bankdeposit :: show()
{
	cout<<endl<<"principal amount was "<<principal;
	cout<<endl<<"return value after  "<<returnValue;
	cout<<endl<<"years is "<<years;
	
}

int main()
{
	Bankdeposit bd1,bd2,bd3;
	int p,y;
	float r;
	int R;
	
	cout<<"Enter the value of p y and r"<<endl;
	cin>>p>>y>>r;
	bd1 = Bankdeposit(p,y,r);
	bd1.show();
	
	cout<<"Enter the value of p y and R"<<endl;
	cin>>p>>y>>R;
	bd2 = Bankdeposit(p,y,R);
	bd2.show();
	
	
}

