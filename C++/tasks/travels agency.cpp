#include<iostream>
#include<cstring>
using namespace std;

class A
{
	public:
		char choice[20];
		void display()
		{
			cout<<"        WELCOME TO BK TRAVELS         "<<endl<<endl;
			cout<<"--------------------------------------------"<<endl<<endl;
			cout<<"We Provide Following Tours "<<endl;
			cout<<"   from                 To"<<endl;
			cout<<"1. Ahmedabad            jaipur"<<endl;
			cout<<"2. Ahmedabad            goa"<<endl;
			cout<<"3. Ahmedabad            delhi"<<endl;
			cout<<"4. Ahmedabad            udaipur"<<endl;
			cout<<"5. Ahmedabad            jaisalmer"<<endl;
			
			cout<<"Enter yes for registration :";
			cin>>choice;
		}
};
class B
{
	public :
		char name[20],city[20],email[100],address[200],DOB[20],user_name[20],pswd[20];
		double age,contact;
		void input()
		{
			cout<<"--------------Registration form--------------"<<endl<<endl;
			cout<<"1. Name :";
			cin>>name;
			cout<<endl<<"2. Age : ";
			cin>>age;
			cout<<endl<<"3. DOB : ";
			cin>>DOB;
			cout<<endl<<"4. Email : ";
			cin>>email;
			cout<<endl<<"5. Contact : ";
			cin>>contact;
			cout<<endl<<"6. Address : ";
			cin>>address;
			cout<<endl<<"7. city : ";
			cin>>city;
			
			
			cout<<endl<<"--------------login crediantials-----------"<<endl;
			cout<<endl<<"1. user Name:";
			cin>>user_name;
			cout<<endl<<"2. password :";
			cin>>pswd;
		}
};
class C: public B
{
	public :
		char u1_name[20],l_pswd[20];
		
		void login()
		{
			cout<<"-----------------login-------------------"<<endl;
			cout<<"Enter name :";
			cin>>u1_name;
			cout<<"Enter password";
			cin>>l_pswd;
		}
};

int main()
{
	char ip[20] ="yes";
	
	A obj;
	C obj1;
	
	obj.display();
	if(strcmp(obj.choice,ip)==0)
	{
		obj1.input();
		obj1.login();
	}
	else
	{
		cout<<"Thank you ";
	}
	return 0;
	
}
