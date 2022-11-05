#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public:
		char yes[20];
		void display()
		{
			cout<<"-------------welcome to Ahmedabad travels---------"<<endl<<endl;
			cout<<"--------------------------------------------------"<<endl;
			cout<<"1.SG HIGHWAY "<<endl;
			cout<<"2.Geta mandir "<<endl;
			cout<<"3.CG road "<<endl;
			cout<<"4.GOTA "<<endl;
			cout<<"5. ISKON ROAD "<<endl;
			
			cout<<"Enter yes for registration"<<endl;
			cin>>yes;
			
		}
};
class B
{
	public:
		char name[20],email[20],addresh[20],username[20],password[20];
		double age,contact;
		void input()
		{
			cout<<"------------------Registration form---------------"<<endl;
			cout<<"1.name"<<endl;
			cin>>name;
			cout<<"2.Age"<<endl;
			cin>>age;
			cout<<"3.Email"<<endl;
			cin>>email;
			cout<<"4.contact"<<endl;
			cin>>contact;
			cout<<"5.addresh"<<endl;
			cin>>addresh;
			
			
			cout<<"----------------login crediantials----------------"<<endl;
			cout<<"1. user name"<<endl;
			cin>>username;
			cout<<"2. password"<<endl;
			cin>>password;
			
			cout<<"Registration done"<<endl;
			
		}
		
};
class C: public B
{
	
	public:
		char username[20],password[20];
		void login()
		{
			cout<<"---------------login---------------------------"<<endl;
			cout<<"username"<<endl;
			cin>>username;
			cout<<"password"<<endl;
			cin>>password;
			
		}
};
int main()
{
	char ip[20] ="yes";
	
	A obj;
	C obj1;
	
	obj.display();
	if (strcmp(obj.yes,ip)==0)
	{
		obj1.input();
		obj1.login();
	}
	else
	{
		cout<<"Thank you";
	}
	return 0;
	
}
