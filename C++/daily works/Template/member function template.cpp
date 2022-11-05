#include<iostream>
using namespace std;



template <class T>
class Harry
{
public:
    T data;
    bhavesh(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void bhavesh<T> :: display(){
    cout<<data;
}
int main()
{
    bhavesh<int> h(5);
    cout << b.data << endl; // 5
    b.display();     // 5
    return 0;
}



#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
	func1(3);
    func(4);  //Exact match takes the highest priority
    return 0;
}

