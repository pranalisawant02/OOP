#include<iostream>
#include<fstream>
using namespace std;

class Student{
	public:
		char name[20];
		int roll_no;
		float per;
		
void write()
{
	fstream f;
	f.open("Student.txt",ios::app);
	cout<<"Enter Roll_no,Name,Per"<<endl;
	cin>>roll_no>>name>>per;
	f<<roll_no<<"\t"<<name<<"\t"<<per<<"\n";
	f.close();	
}
void read()
{
	fstream f;
	f.open("Student.txt",ios::in);
	cout<<"roll_no"<<"\t"<<"name"<<"\t"<<"per"<<"\n";
	while(f)
	{
		f>>roll_no>>name>>per;
		cout<<roll_no<<"\t"<<name<<"\t"<<per<<"\n";
	}
	f.close();
}
};
int main()
{
	Student s;
	s.write();
	s.write();
	s.read();
	return 0;
}

