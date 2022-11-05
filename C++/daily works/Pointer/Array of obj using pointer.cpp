#include<iostream>
using namespace std;

class ShopItem
{
	int id;
	float price;
	public:
		void setdata(int a,float b)
		{
			id =a;
			price=b;
		}
		void getdata()
		{
			cout<<"code of this item is "<<id<<endl;
			cout<<"price of this is"<<price<<endl;
		}
};

int main()
{
   int size =3;
   ShopItem *ptr = new ShopItem [size];
   ShopItem *ptrtemp = ptr;
   int p,i;
   float q;
   for(i=0;i<size;i++)
   {
   	cout<<"Enter Id and price of item "<<i+1<<endl;
   	cin>>p>>q;
   	//  (*ptr).setdata(p,q);
   	  ptr->setdata(p,q);
   	  ptr++;
   }
   for(i=0;i<size;i++)
   {
   	cout<<"item number "<<i+1<<endl;
   	//  (*ptr).setdata(p,q);
   	  ptrtemp->getdata();
   	  ptrtemp++;
   }
   
   return 0;
}

