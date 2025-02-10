#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void get1()
		{
			cout<<"Enter 1st numbers:"<<endl;
			cin>>a;
		}
	};
class B{
	public:
		int b;
		void get2()
		{
			cout<<"Enter two numbers:"<<endl;
			cin>>b;
		}
	};
	//Multiple inheritance
class C:public B,public A
{
	public:
		void sum()
		{
			cout<<"Addition:"<<a+b<<endl;
		}

};
int main()
{
	C obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;
}
