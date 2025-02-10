#include<iostream>
using namespace std;
//multilevel inheritance
class A{
	public:
		int a,b;
		void get1()
		{
			cout<<"Enter 2 numbers:"<<endl;
			cin>>a>>b;
		}
	};

class B:public A
{
	public:
		int s;
		void sum()
		{
			s=a+b;
		}
		
};
class C:public B
{
	public:
		void avg()
		{
			cout<<"Avg of a & b is:"<<s/2<<endl;
		}
};
int main()
{
	C obj;

	obj.get1();
	obj.sum();
	obj.avg();
	return 0;
}
