#include<iostream>
using namespace std;
//function overloading
class Shape{
	public:
	float a;
	void area(int r)
	{
		a=3.142*r*r;
		cout<<"Area of circle is:"<<a<<endl;
	}
	void area(int a,int b)
	{
		a=a*b;
		cout<<"Area of rectangle is:"<<a<<endl;
	}
	void area(float h,int b)
	{
		a=0.5*h*b;
		cout<<"Area of triangle is:"<<a;
	}
};
int main()
{	float h=3.2;
	int b=6;
	Shape s1;
	s1.area(5);
	s1.area(3,6);
	s1.area(h,b);
	return 0;
}
