#include<iostream>
using namespace std;
//function overriding:controlling things through another things
class Parent{
	public:
		void f1()
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
	Parent p;
	p.f1();
	Child c;
	c.f1();
	return 0;
}
