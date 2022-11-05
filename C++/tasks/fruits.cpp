#include<iostream>
using namespace std;
int choice()
{
	int ch,q,total,extra=0;
	char choice;
	int a=50;
	int b=20;
	int c=90;
	int d=45;
	int e=70;
	
	first:
	again:	
	cout<<"\nEnter your choice  :";
	cin>>ch;
	switch(ch)
	{
		case 1:
	        cout<<"Apple prize = "<<a;
	        ch=a;
	        break;
	    case 2:
	        cout<<"Banana prize = "<<b;
		    ch=b;
		    break;
		case 3:
	        cout<<"Mango prize = "<<c;
	        ch=c;
	        break;
	    case 4:
	        cout<<"Orange prize = "<<d;
		    ch=d;
		    break;
		case 5:
	        cout<<"Cherry prize = "<<e;
	        ch=e;
	        break;	
	    default:
	    	cout<<"Invalid input !! Enter your choice again";
	    	goto first;
	    	break;
	}
	
	
	cout<<"Enter quantity\n";
	cin>>q;
	
	total =q*ch;
	cout<<"Total bill ="<<total;
	extra+=total;
	
	cout<<endl<<"Want to continue buying then press y or else press n :  ";
	cin>>choice;
	while(choice=='y'||choice=='Y')
	{
		goto again; 
	}
	
	cout<<"Final bill ="<<endl<<extra;
	cout<<"Thank you and have a great day";
	
}
int main()
{
	cout<<"------------------Menu-----------------"<<endl;
	cout<<"1.Apple"<<endl;
	cout<<"2.Banana"<<endl;
	cout<<"3.Mango"<<endl;
	cout<<"4.Orange"<<endl;
	cout<<"5.Cherry"<<endl;
	
	choice();
	
	return 0;
}
