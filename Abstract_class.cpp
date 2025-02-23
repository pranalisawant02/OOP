// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class Shape{//auto abstract class
    public:
   virtual void draw()=0;//pure virtual function
};
class Circle:public Shape{//child class
    public:
    void draw()
    {
        cout<<"Circle"<<endl;
    }
};
int main() {
  Circle c1;
  c1.draw();

    return 0;
}
