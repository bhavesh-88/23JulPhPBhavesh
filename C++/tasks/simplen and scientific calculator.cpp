

#include<iostream>
#include<cmath>
using namespace std;

class Simple{
	protected:
		int num1, num2;
		int sum, diff, prod;
		float div;
	public:
		void setInfo_Sim(int a, int b){
			num1 = a;
			num2 = b;
		}
		void process_Sim(void){
			sum = num1 + num2;
			diff = num1 - num2;
			prod = num1 * num2;
			div = (float)num1 / num2;
		}
		void display_Sim(void){
			cout << num1 << " + " << num2 << " = " << sum << endl;
			cout << num1 << " - " << num2 << " = " << diff << endl;
			cout << num1 << " * " << num2 << " = " << prod << endl;
			cout << num1 << " / " << num2 << " = " << div << endl;
		}
};

class Scientific{
	protected:
		int num3, num4;
		float sqr3, sqr4;
		float cub3, cub4;
		float sqrt3, sqrt4;
		float cbrt3, cbrt4;
	public:
		void setInfo_Sci(int a, int b){
			num3 = a;
			num4 = b;
		}
		void process_Sci(void){
			sqr3 = num3 * num3;
			sqr4 = num4 * num4;
			cub3 = num3 * num3 * num3;
			cub4 = num4 * num4 * num4;
			sqrt3 = sqrt(num3);
			sqrt4 = sqrt(num4);
			cbrt3 = cbrt(num3);
			cbrt4 = cbrt(num4);
		}
		void display_Sci(void){
			cout << "Square of " << num3 << ": " << sqr3 << endl;
			cout << "Square of " << num4 << ": " << sqr4 << endl;
			cout << "Cube of " << num3 << ": " << cub3 << endl;
			cout << "Cube of " << num4 << ": " << cub4 << endl;
			cout << "Square Root of " << num3 << ": " << sqrt3 << endl;
			cout << "Square Root of " << num4 << ": " << sqrt4 << endl;
			cout << "Cube Root of " << num3 << ": " << cbrt3 << endl;
			cout << "Cube Root of " << num4 << ": " << cbrt4 << endl;
		}
};

class Hybrid : public Simple, public Scientific{
	public:
		void set(int a, int b){
			setInfo_Sim(a, b);
			setInfo_Sci(a, b);
		}
		void process(void){
			process_Sim();
			process_Sci();
		}
		void display(void){
			display_Sim();
			display_Sci();
		}
};


#include<iostream>
#include<maths>
using namespace std;
int main(){
	int a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	
	Hybrid object;
	object.set(a, b);
	object.process();
	object.display();
	
	return 0;
}

class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};
class scientificcalculator
{

 public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
	class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};
int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}

