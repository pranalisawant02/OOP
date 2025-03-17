#include<iostream>
using namespace std;
int main()
{	int age;
	cout<<"Enter age:"<<endl;
	cin>>age;
	
	try
	{
		if(age<0)
			throw "Invalid age!";
		else if(age==0)
			throw "Zero age";
		else
			cout<<"Age:"<<age<<" is valid age";	
	}
	catch(const char *str)
	{
		cout<<"Exception :"<<str;
	}
	return 0;
}
