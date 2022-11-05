#include<iostream>
using namespace std;

float moneyrecived(int currentmoney, float factor*(1.04))
{
	return currentmoney*factor;
}
int main()
{
	int money =100000;
	cout<<"if you have"<<money<<"Rs in your bank account,you will recive "<<moneyrecived(money)<<"Rs after 1 years"<<endl;
	cout<<" for vip :if you have"<<money<<"Rs in your bank account,you will recive "<<moneyrecived(money,1.10)<<"Rs after 1 years"<<endl;
}
