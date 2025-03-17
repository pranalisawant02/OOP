#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter two no's for division:";
	cin>>b>>c;
	
try{
	if(c==0) throw "Divide by zero error!";
	a=b/c;
	cout<<"Answer="<<a<<endl;
}
catch(const char*str)
{
	cout<<"Exception :"<<str;	
}
return 0;
}
