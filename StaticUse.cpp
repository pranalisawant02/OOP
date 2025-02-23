// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class Static{
    public:
  void fun()
   {
       static int x=0;
       cout<<"X:"<<x<<endl;
       x++;
   }
};
int main() {
    // Write C++ code here
    Static s1;
    s1.fun();
     s1.fun();
      s1.fun();
    return 0;
}
