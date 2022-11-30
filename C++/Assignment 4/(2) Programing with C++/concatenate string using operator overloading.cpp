/ C++ Program to concatenate two string
// using unary operator overloading
#include <iostream>
#include <string.h>
 
using namespace std;
 
// Class to implement operator overloading
// function for concatenating the strings
class AddString {
 
public:
    // Classes object of string
    char s1[25], s2[25];
 
    // Parameterized Constructor
    AddString(char str1[], char str2[])
    {
        // Initialize the string to class object
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
 
    // Overload Operator+ to concat the string
    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
 
// Driver Code
int main()
{
    // Declaring two strings
    char str1[] = "Geeks";
    char str2[] = "ForGeeks";
 
    // Declaring and initializing the class
    // with above two strings
    AddString a1(str1, str2);
 
    // Call operator function
    +a1;
    return 0;
}






#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"\n Enter String              :   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)  //Concatenating String
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display_string();   //Displaying First String

        cout<<"\n\n Second String is          :  ";
        str2.display_string();  //Displaying Second String

        cout<<"\n ----------------------------------------------";
        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
        cout<<"\n\n Concatenated String is    :  ";
        str3.display_string();

        return 0;
}
