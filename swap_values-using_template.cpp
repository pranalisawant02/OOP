#include<iostream>

using namespace std;

template <typename T>

void swapValues(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
	
}
int main()
{   int a,b;
	cout<<"Enter the values of a & b:"<<endl;
	cin>>a>>b;
	cout<<"original values:"<<a<<" "<<b;
	swapValues(a,b);
	cout<<"\nSwapped values:"<<a<<" "<<b;
	return 0;
}
