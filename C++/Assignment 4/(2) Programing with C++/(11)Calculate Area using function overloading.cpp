#include<iostream>
using namespace std;

class Area
{
	public:
		int area(int ar,int l,int w)
		{
			return (ar*l*w);
		}
		int area(int a,int b,int h)
		{
			a=0.5;
			return (a*b*h);
		}
		int area(int b,int r)
		{
			b=3.14;
			return (b*r*r);
		}
};
int main()
{
	Area cal;
	
	cout<<"-----------------------------------\n";
	cout<<"Area of Reactangle are :";
	
	cal.area(6,5,4);
	cout<<"Area of Triangle is";
	
	cal.area(3,5,7);
	
	cout<<"Area of Circle is";
	cal.area(3);
	
 } 
 
 
 
 
 nclude<iostream>
#include<cstdlib>
using namespace std;

float area(float r)
{
        return(3.14 * r * r);
}
float area(float b,float h)
{
        return(0.5 * b * h);
}
float area(float l,float b)
{
        return (l * b);
}
int main()
{
        float b,h,r,l;
        int ch;

        do
        {
                cout<<"\n\n *****Menu***** \n";
                cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Area of Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\n Enter the Base & Height of Triangle : ";
                                cin>>b>>h;
                                cout<<"\n Area of Triangle : "<<area(b,h);
                                break;
                        }
                        case 3:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=4);
        return 0;
}




#include<iostream>
#include<cmath>
using namespace std;
void area(float, float, float);
void area(float, float);
void area(float);
int main() {
    int choice;
    float r, l, b, x, y, z;
    cout<<"Whose area you want to calculate?"<<endl;
    cout<<"1 - Area of circle"<<endl;
    cout<<"2 - Area of rectangle"<<endl;
    cout<<"3 - Area of triangle"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the radius of circle."<<endl;
        cin>>r;
        area(r);
        break;
    
    case 2:
        cout<<"Enter the sides of rectangle."<<endl;
        cin>>l>>b;
        area(l,b);
        break;
    case 3:
        cout<<"Enter the sides of triangle."<<endl;
        cin>>x>>y>>z;
        area(x,y,z);
        break;
    default:
        cout<<"Choose from 1, 2, 3"<<endl;
        break;
    }
    return 0;
}
void area(float r) {
    float pi = 3.14;
    cout<<"Area of circle is "<<pi*r*r<<endl;
}
void area(float l, float b) {
    cout<<"Area of rectangle is "<<l*b<<endl;
}
void area(float a, float b, float c) {
    float s, area;
    if((a+b)>c && (b+c)>a && (a+c)>b) {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of triangle is "<<area<<endl;
    }
    else cout<<"Triangle does not form"<<endl;
}
