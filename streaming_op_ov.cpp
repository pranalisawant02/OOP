#include<iostream>
using namespace std;

class Date{
	int date,month,year;
	public:
		Date():date(1),month(1),year(2000){};//deafault constructor
		friend	void operator>>(istream &i,Date &d);
		friend	void operator<<(ostream &o,Date &d);

};
void operator>>(istream &in,Date &d)
{
	cout<<"Enter the date:";
	in>>d.date;
	in>>d.month;
	in>>d.year;
	
}
void operator<<(ostream &out,Date &d)
{
	out<<"\nEntered date is:"<<d.date<<"/"<<d.month<<"/"<<d.year<<endl;
}
int main()
{
	Date d1;
	//cin>>d1;
	cout<<d1;
}
