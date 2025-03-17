#include<iostream>
using namespace std;

int get_age()
{	int age;
	cout<<"Enter age:"<<endl;
	cin>>age;
	
	if(age<0)
		throw age;
	else if(age==0)
		throw "Zero age";
	return age;
	
}
int main()
{	int age;
	try
	{	age=get_age();
		cout<<"Valid Age: "<<age;		
	}
	catch(int a)
	{	cout<<"Invalid Age: "<<a;
	}
	catch(const char *str)
	{	cout<<"Zero Age Exception :"<<str;
	}
	return 0;
}
