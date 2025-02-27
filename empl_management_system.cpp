// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class Employee{
    public:
        string name;
        int ID;
        float salary;
   void setInfo(string name,int ID, float salary)
   {
       this ->name=name;
       this->ID=ID;
       this->salary=salary;
   }
    void getInfo()
    {
        cout<<"Emp_name: "<<name<<"\n"<<"Emp_ID: "<<ID<<"\n"<<"Emp_salary: "<<salary<<endl;
    }
};
class Manager:public Employee{
    public:
        float bonus;
        void disp()
        {
        cout<<"Bonus is $5000"<<endl;
        }
};
class Developer:public Employee{
    public:
        string prog_lang;
        void disp()
        {
        cout<<"Programming language is C++";}
};

int main() {
    Employee e;
     Manager m;
    // Developer d;
    m.setInfo("Pranali",124,20000);
   //e.getInfo();
    m.disp();
    m.getInfo();
    //e.disp();
    return 0;
}
