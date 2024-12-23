#include<iostream>
#include ".\calculator.cpp"
using namespace std;

int main() {
    Calculator calc;
	int op=0,a,b;
	cout<<"****Simple Calculator****"<<endl;
	cout<<"Select Option to Perform :"<<endl;
	cout<<"1 for Addition \n2 for subtract \n3 for multiply \n4 for divide \n"<<endl;
	cin>>op;
	if (op>=1&&op<=4)
	{
		
	}
	else
	{
		cout<<"Invalid Option..."<<endl;
		return 0;
	}
	
	cout<<"Enter the numbers :\n"<<endl;
	cin>>a;
	cin>>b;
	
	
	switch(op)
	{
		case 1: 
		{
			cout << a<<" + " <<b <<" = " << calc.add(a, b) << endl; 
			break;
		}
		case 2: cout << a<<" - " <<b <<" = " << calc.subtract(a, b) << endl; break;
		case 3: cout << a<<" * " <<b <<" = " << calc.multiply(a, b) << endl; break;
		case 4: if (b==0)
		{
			cout<<"Division by zero is undefined"<<endl;
			break;
		}
		else
		{
			cout << a<<" / " <<b <<" = " << calc.divide(a, b) << endl; 
			break;
		}
	}
	getchar();
	getchar();
    return 0;
}