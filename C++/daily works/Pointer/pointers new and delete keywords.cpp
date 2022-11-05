#i
\nclude<iostream>
using namespace std;
int main()
{
	// basic example
	int a=4;
	int* ptr =&a;
	cout<<"The value of a is "<<*(ptr)<<endl;
	
	
	// new keywords
	 int *p =new int(48);
//	int *p = new float(45.63);
	cout<<"The vlaue at address p is "<<*(p)<<endl;
	
	// new keywords dynamically memory allocate
	int *arr =new int[3];
	arr[0]=1;
	arr[1]=2;
	arr[2]=3;
//	delete[] arr;
	cout<<"The value of arr[0] is "<<arr[0]<<endl;
	cout<<"The value of arr[1] is "<<arr[1]<<endl;	
	cout<<"The value of arr[2] is "<<arr[2]<<endl;
	
	return 0;
}

/*
#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
  
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
*/
