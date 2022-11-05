// this pointer it can return current class instance /obj
// friend function do not have a this pointer
// because friend fun are not member of a class only member funtion have a this pointer

class A{
	public:
		int a;
		void display(int p)
		{
			this->a=p;
			cout<<"A= "<<p;
		}
};
int main()
{
	A obj;
	obj.display(4);
}
