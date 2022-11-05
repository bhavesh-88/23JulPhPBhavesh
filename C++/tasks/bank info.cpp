//using concept of heirarchical inheritance and fuction make SBI programm
#include<iostream>
#include<cstring.>
using namespace std;

class A
{
	public:
		int ch;
		int state()
		{
			cout<<"-----------------Welcome to SBI-----------------"<<endl;
			
			cout<<"1. Rajsthan"<<endl;
			cout<<"2. Gujarat"<<endl;
			cout<<"3. MP"<<endl;
			cout<<"4. Mh"<<endl;
			cout<<"5. Delhi"<<endl;
			cout<<endl<<"select your state";
			cin>>ch;
			  switch(ch)
			  {
			  	    case 1:
			  	   	  cout<<endl<<"----------------------------Welcome to Rajasthan SBI------------------------------------";
			  	   	  break;
			  	   	case 2:
			  	   	  cout<<endl<<"----------------------------Welcome to Gujarat SBI------------------------------------";
			  	   	  break;
					case 3:
			  	   	  cout<<endl<<"----------------------------Welcome to MP SBI------------------------------------";
			  	   	  break;
					case 4:
			  	   	  cout<<endl<<"----------------------------Welcome to MH SBI------------------------------------";
			  	   	  break;
					case 5:
			  	   	  cout<<endl<<"----------------------------Welcome to Delhi SBI------------------------------------";
			  	   	  break;	   	   	     
			  	   	default:
						cout<<endl<<"Invalid input";
					      	  
			  }
		}
};

class B:public A
{
	public:
	    int hc;
	    int city()
	    {
	    	
	    	 switch(A::ch)
	    	 {
			    case 1:
	    	       cout<<endl<<"1. Jaipur";
	    	       cout<<endl<<"2. Udaipur";
	    	       cout<<endl<<"3. Ajmer";
	    	       cout<<endl<<"4. Jodhpur";
	    	       
	    	       cout<<endl<<"select your city";
	    	       cin>>hc;
	    	       switch(hc)
	    	       {
	    	       	    case 1:
	    	       	   	  cout<<endl<<"---------------Welcome to Jaipur SBI-------------------";
	    	       	   	  break;
	    	       	   	case 2:
	    	       	   	  cout<<endl<<"---------------Welcome to Udaipur SBI-------------------";
	    	       	   	  break;
						case 3:
	    	       	   	  cout<<endl<<"---------------Welcome to Ajmer SBI-------------------";
	    	       	   	  break;	  
	    	       	   	case 4:
	    	       	   	  cout<<endl<<"---------------Welcome to Jodhpur SBI-------------------";
	    	       	   	  break;
	    	       	   	default:
						   cout<<endl<<"Invalid input";    
	    	       	   	   break;
				   }
	    	    break;
				case 2:
	    	       cout<<endl<<"1. Ahemdabad";
	    	       cout<<endl<<"2. Baroda";
	    	       cout<<endl<<"3. Surat";
	    	       cout<<endl<<"4. Rajkot";
	    	       
	    	       cout<<endl<<"select your city";
	    	       cin>>hc;
	    	       switch(hc)
	    	       {
	    	       	    case 1:
	    	       	   	  cout<<endl<<"---------------Welcome to Ahemdabad SBI-------------------";
	    	       	   	  break;
	    	       	   	case 2:
	    	       	   	  cout<<endl<<"---------------Welcome to Baroda SBI-------------------";
	    	       	   	  break;
						case 3:
	    	       	   	  cout<<endl<<"---------------Welcome to Surat SBI-------------------";
	    	       	   	  break;	  
	    	       	   	case 4:
	    	       	   	  cout<<endl<<"---------------Welcome to Rajkot SBI-------------------";
	    	       	   	  break;
	    	       	   	default:
						   cout<<endl<<"Invalid input";    
	    	       	   	   break;
				   }
	    	    break;
	    	    case 3:
	    	       cout<<endl<<"1. Indore";
	    	       cout<<endl<<"2. Bhopal";
	    	       cout<<endl<<"3. Gwalior";
	    	       cout<<endl<<"4. Ratlam";
	    	       
	    	       cout<<endl<<"select your city";
	    	       cin>>hc;
	    	       switch(hc)
	    	       {
	    	       	    case 1:
	    	       	   	  cout<<endl<<"---------------Welcome to Indore SBI-------------------";
	    	       	   	  break;
	    	       	   	case 2:
	    	       	   	  cout<<endl<<"---------------Welcome to Bhopal SBI-------------------";
	    	       	   	  break;
						case 3:
	    	       	   	  cout<<endl<<"---------------Welcome to Gwalior SBI-------------------";
	    	       	   	  break;	  
	    	       	   	case 4:
	    	       	   	  cout<<endl<<"---------------Welcome to Ratlam SBI-------------------";
	    	       	   	  break;
	    	       	   	default:
						   cout<<endl<<"Invalid input";    
	    	       	   	   break;
				   }
	    	    break;
	    	    case 4:
	    	       cout<<endl<<"1. Mumbai";
	    	       cout<<endl<<"2. Pune";
	    	       cout<<endl<<"3. Nagpur";
	    	       cout<<endl<<"4. Thane";
	    	       
	    	       cout<<endl<<"select your city";
	    	       cin>>hc;
	    	       switch(hc)
	    	       {
	    	       	    case 1:
	    	       	   	  cout<<endl<<"---------------Welcome to Mumbai SBI-------------------";
	    	       	   	  break;
	    	       	   	case 2:
	    	       	   	  cout<<endl<<"---------------Welcome to Pune SBI-------------------";
	    	       	   	  break;
						case 3:
	    	       	   	  cout<<endl<<"---------------Welcome to Nagpur SBI-------------------";
	    	       	   	  break;	  
	    	       	   	case 4:
	    	       	   	  cout<<endl<<"---------------Welcome to Thane SBI-------------------";
	    	       	   	  break;
	    	       	   	default:
						   cout<<endl<<"Invalid input";    
	    	       	   	   break;
				   }
	    	    break;
	    	    case 5:
	    	       cout<<endl<<"1. New Delhi";
	    	       cout<<endl<<"2. Firozabad";
	    	       cout<<endl<<"3. Shergarh";
	    	       cout<<endl<<"4. Siri";
	    	       
	    	       cout<<endl<<"select your city";
	    	       cin>>hc;
	    	       switch(hc)
	    	       {
	    	       	    case 1:
	    	       	   	  cout<<endl<<"---------------Welcome to New Delhi SBI-------------------";
	    	       	   	  break;
	    	       	   	case 2:
	    	       	   	  cout<<endl<<"---------------Welcome to Firozabad SBI-------------------";
	    	       	   	  break;
						case 3:
	    	       	   	  cout<<endl<<"---------------Welcome to Shergarh SBI-------------------";
	    	       	   	  break;	  
	    	       	   	case 4:
	    	       	   	  cout<<endl<<"---------------Welcome to Siri SBI-------------------";
	    	       	   	  break;
	    	       	   	default:
						   cout<<endl<<"Invalid input";    
	    	       	   	   break;
				   }
	    	    break;
	        }
		}
};

class C
{
	public:
		char name[50],DOB[30],address[100],type[20],use1[20],pass1[20];
		double age,/*contactaddahar_num,*/pan;
		char use2[20],pass2[20];
		int contact,addahar_num;
		int choice,bal=50000,deb,cred,tod,toc;
		int reg()
		{
			
			cout<<endl<<"-----------------------Registration------------------------";
			cout<<endl<<"Enter Name :";
			cin>>name;
			cout<<endl<<"Enter Age :";
			cin>>age;
			cout<<endl<<"Enter contact number:";
			cin>>contact;
			cout<<endl<<"Enter Addahar Number :";
			cin>>addahar_num;
			cout<<endl<<"Enter DOB";
			cin>>DOB;
		//	cout<<endl<<"Enter PAN CARD Details";
		//	cin>>pan;
			cout<<endl<<"Enter Address";
			cin>>address;
			cout<<endl<<"Enter Account type :";
			cin>>type;
			
			cout<<endl<<"Sucessfully Registration";
			cout<<endl<<"------------------Your Bank Details--------------------";
			cout<<endl<<"Enter Name :"<<name;
			cout<<endl<<"Enter Age :"<<age;
			cout<<endl<<"Enter contact number:"<<contact;
			cout<<endl<<"Enter Addahar Number :"<<addahar_num;
			cout<<endl<<"Enter DOB "<<DOB;
		//	cout<<endl<<"Enter PAN CARD Details :"<<pan;
			cout<<endl<<"Enter Address :"<<address;
			cout<<endl<<"Enter Account type :"<<type;
			
			cout<<endl<<"-------------------login details---------------------";
			again:
			cout<<endl<<"Enter username";
			cin>>use1;
			cout<<endl<<"Enter password";
			cin>>pass1;
			
			cout<<endl<<"-------------------login agian---------------------";
			cout<<endl<<"Enter username";
			cin>>use2;
			cout<<endl<<"Enter password";
			cin>>pass2;
			
			if(strcmp(use1,use2)==0 && strcmp(pass1,pass2)==0)
			{
				cout<<endl<<"-----------------MENU---------------------";
				cout<<endl<<"1. credit";
				cout<<endl<<"2. debit";
				cout<<endl<<"3. view balance";
				cout<<endl<<"4. logout";
				
				cout<<endl<<"Enter your choice";
				cin>>choice;
				switch(choice)
				{
					case 1:
						cout<<"Enter the amount to be credit :";
			            cin>>cred;
			            toc=50000+cred;
			            cout<<"Reamaining Balance :"<<toc;
			            break;
			        case 2:
						cout<<"Enter the amount to be debit :";
			            cin>>deb;
			            tod=50000-deb;
			            cout<<"Reamaining Balance :"<<tod;
			            break;    
			        case 3:
			            cout<<"Available Balance :"<<bal;
			            break;    
			        case 4:
					    break;   
				}
			}
			else
			{
				cout<<"username and password incorrect  ! Please try agian";
				goto again;
			}
		}	
};

class D: public C
{
	public:
		char pass[20],use[20];
		int ch1,bal=50000,deb,cred,tod,toc;
		int ch2;
		void reg1()
		{
			cout<<endl<<"Are you registered user :";
			cout<<"1. yes            2. no";
			cout<<endl<<"Select from above";
			cin>>ch1;
			if(ch1==1)
			{
			cout<<endl<<"-------------------login details---------------------";
			
			cout<<endl<<"Enter username";
			cin>>use;
			cout<<endl<<"Enter password";
			cin>>pass;
				cout<<endl<<"-----------------MENU---------------------";
				cout<<endl<<"1. credit";
				cout<<endl<<"2. debit";
				cout<<endl<<"3. view balance";
				cout<<endl<<"4. logout";
				
				cout<<endl<<"Enter your choice";
				cin>>ch2;
				
				switch(ch2)
				{
					case 1:
						cout<<"Enter the amount to be credit :";
			            cin>>cred;
			            toc=50000+cred;
			            cout<<"Reamaining Balance :"<<toc;
			            break;
			        case 2:
						cout<<"Enter the amount to be debit :";
			            cin>>deb;
			            tod=50000-deb;
			            cout<<"Reamaining Balance :"<<tod;
			            break;    
			        case 3:
			            cout<<"Available Balance :"<<bal;
			            break;    
			        case 4:
					    break;   
				}
			}
			
			else if(ch1==2)
			{
				C::reg();
			}
			
		}
		
};
int main()
{
	B obj;
	D obj1;
	
	obj.state();
	obj.city();
	obj1.reg1();
	end:
	return 0;
}

