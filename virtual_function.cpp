#include<iostream>
using namespace std;
//virtual function
class Parent{
	public:
	virtual	void f1()
		{
			cout<<"Hi! I am a parent class."<<endl;
		}
};		
class Child:public Parent {
	public:
		void f1()
		{
			cout<<"Hi! I am a child class.";
		}
};

int main()
{
	Parent *p;
	Child c;
	p=&c;
	p->f1();
	return 0;
}
