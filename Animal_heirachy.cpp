#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
        void makeSound()
        {
            cout<<"Animal- WOOHOO!"<<endl;
        }
};
class Dog:public Animal{
    public:
        void makeSound()
        {
            cout<<"Dog- BhooBhoo!"<<endl;
        }
};
class Cat:public Animal{
    public:
        void makeSound()
        {
            cout<<"Cat- MeowMeow!"<<endl;
        }
};
int main()
{
    Animal a1;
    Dog d2;
    Cat c3;
    .makeSound();
     d2.makeSound();
     c3.makeSound();
      return 0;
}
