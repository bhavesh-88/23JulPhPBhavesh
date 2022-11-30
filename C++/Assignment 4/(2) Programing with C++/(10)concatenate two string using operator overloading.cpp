#include<iostream>
#include<string.h>
using namespace std;

class string
{
	public:
	char str[20];
	       void accept()
	       {
	       	
	       	cout<<"Enter string :";
	       	cin>>str;
		   }
		   void display()
		   {
		   	cout<<str;
		   }
		   
		   string operator +(string obj)
		   {
		   	  string s;
		   	  strcat(str,obj.str);
		   	  strcpy(s.str,str);
		   	  return s;
		   }
};
int main()
{
	string str1;
	string str2;
	string str3=str1+str2;
	str1.accept();
	str2.accept();
	
	cout<<"---------------------------------";
	cout<<"first string is:   ";
	str1.display();
	
	cout<<"---------------------------------";
	cout<<"second string is:   ";
	str2.display();
	
	cout<<"---------------------------------";
	cout<<"concatenate string is:   ";
	str3.display();
	
	
	
	
}
