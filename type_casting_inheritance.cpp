#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog;
    
    // Upcasting: Derived class object (Dog) to Base class pointer (Animal)
    Animal* animalPtr = &dog;
    animalPtr->speak();  // Calls Dog's speak() due to polymorphism
    
    return 0;
}
