// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class ABC{
    public:
    //construtor
    ABC()
    {
        cout<<"Constructor"<<endl;
    }
    ~ABC()
    {
        cout<<"Destructor"<<endl;
    }
};
int main() {
    // Write C++ code here
   if (true)
   {
      static ABC obj;
   }
    cout<<"End of main function"<<endl;
    return 0;
}
