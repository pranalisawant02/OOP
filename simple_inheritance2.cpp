#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Method to be overridden
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the speak method
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Create object of Dog
    Dog d;
    d.speak();  // Output: Dog barks

    // Create object of Animal
    Animal a;
    a.speak();  // Output: Animal makes a sound

    return 0;
}
