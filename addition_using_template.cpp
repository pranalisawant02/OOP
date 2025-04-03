#include<iostream>

template<typename T>

T add(T a,T b)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"Sum is:"<<add(3,5)<<endl;
	cout<<"sum is:"<<add(2.5,5.5);
	
	
}
