#include<iostream>
using namespace std;

class Complex{
	public:
		int real,img;
		//parameterized constructor
		Complex(int r,int i)
		{
			real=r;
			img=i;
		} 
		//operator_overloading syntax
		Complex operator + (Complex c4)
		
		{
			Complex c5(0,0);
			c5.real=real+c4.real;
			c5.img=img+c4.img;
			return c5;	
		} 
		//display
		void disp()
		{
			cout<<"Sum: "<<real<<"+"<<img<<"i";
		}
};
int main()
{
	Complex c1(4,5);
	Complex c2(2,3);
	Complex c3=c1+c2;
	c3.disp();
	return 0;
}
