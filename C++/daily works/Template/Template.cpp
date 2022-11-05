#include<iostream>
using namespace std;

class vector
{
	public:
		int *arr;
		int size;
		vector(int m)
		{
			size =m;
			arr = new int[size];
		}
		int dotproduct(vector &v)
		{
			int d=0;
			for(int i=0; i<size ;i++)
			{
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
};
int main()
{
	vector v1(3);   //vector 1
	v1.arr[0] =3;
	v1.arr[1]=2;
	v1.arr[2]=1;
	
	vector v2(3);   // vector 2
	v2.arr[0]=5;
	v2.arr[1]=6;
	v2.arr[2]=7;
	
	int a=v1.dotproduct(v2);
	cout<<a<<endl;
	return 0;
	
}

#include<iostream>
using namespace std;

template <class T>
class vector
{
	public:
		T *arr;
		int size;
		vector(int m)
		{
			size =m;
			arr = new T[size];
		}
		T dotproduct(vector &v)
		{
			T d=0;
			for(int i=0; i<size ;i++)
			{
				d+=this->arr[i]*v.arr[i];
			}
			return d;
		}
};
int main()
{
	vector<float> v1(3);   //vector 1
	v1.arr[0] =3.4;
	v1.arr[1]=2.7;
	v1.arr[2]=1.1;
	
	vector<float> v2(3);   // vector 2
	v2.arr[0]=5.2;
	v2.arr[1]=6.1;
	v2.arr[2]=7.2;
	
	float a=v1.dotproduct(v2);
	cout<<a<<endl;
	return 0;
	
}
