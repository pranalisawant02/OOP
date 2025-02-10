#include<iostream>
using namespace std;
//hybrid inheritance
class A{
	public:
		int a,b;
		void get1()
		{
			cout<<"Enter 2 numbers:"<<endl;
			cin>>a>>b;
		}
	};

class B: virtual public A
{
	public:
		int s;
		void sum()
		{
			s=a+b;
			
		}
		
};
class C:virtual public A
{
	public:
		int d;
		void diff()
		{	d=a-b;
			
		}
};
class D:public B,public C
{	public:	
	void display()
	{
		cout<<"Sum is:"<<s<<endl;
		cout<<"Difference of a & b is:"<<d<<endl;
	}
};
int main()
{	D obj1;
	obj1.get1();
	obj1.sum();
	obj1.diff();
	obj1.display();

	return 0;
}
