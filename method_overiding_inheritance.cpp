#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function to be overridden
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the sound method of the base class
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Overriding the sound method of the base class
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Create objects of derived classes
    Animal* animal1 = new Dog();   // Pointer to base class (but object of derived class)
    Animal* animal2 = new Cat();   // Pointer to base class (but object of derived class)
    
    // Calling overridden methods
    animal1->sound();  // Outputs: Dog barks
    animal2->sound();  // Outputs: Cat meows
    
    delete animal1;
    delete animal2;
    return 0;
}
