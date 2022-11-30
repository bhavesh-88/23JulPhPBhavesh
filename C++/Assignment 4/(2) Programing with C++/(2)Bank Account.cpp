#include<iostream>
using namespace std;

class BankAccount
{
	public:
	int bal=20000;
	char name[20]="bhavesh kumar";
	char type[10]="cureent";
	long int accountnumber=234567890456;
	int de,with,tod,towith;
	
	public:
		void Bank()
		{
			cout<<"-----------Bank Account Details --------------"<<endl;
			cout<<"Name of the depositor : "<<name<<endl;
			cout<<"Account Number : "<<accountnumber<<endl;
			cout<<"Account Type :"<<type<<endl;
			cout<<"Balance = "<<bal<<endl;
		}
		int bank()
		{
			cout<<"Enter the amount to be deposit"<<endl;
			cin>>de;
			tod=20000+de;
		    cout<<"Remaining balance ="<<tod,,endl;
		    cout<<"Enter the amount to be Withdraw"<<endl;
		    cin>>with;
		    towith=tod-with;
		    cout<<"Remaining balance ="<<towith<<endl;
		    cout<<"name ="<<name<<endl<<"Balance = "<<bal<<endl;
		}
};
int main()
{   
     BankAccount obj;
     obj.Bank();
     obj.bank();
}

