#include<iostream>
using namespace std;

//float funAverage(int a,int b)
//{
//	float avg = (a+b)/2.0;
//	return avg;
//}
//float fun2Average(int a,float b)
//{
//	float avg = (a+b)/2.0;
//	return avg;
//}

template <class T1, class T2)
float funAverage(T1 a,T2 b)
{
	float avg = (a+b)/2.0;
	return avg;
}
template<class T>
void swap(T &a, T &b)
{
	T temp =a;
	a =b;
	temp= temp;
}
int main()
{
	float a;
	a= funAverage(5,4);
	printf("The average of these numbers is %f",a);
	
	int x=2; int =5;
	swap(x,y);
	cout<<x<<endl<<y;
	
//	a= fun2Average(5,4);
//	printf("The average of these numbers is %f",a);
	
	return 0;
}
