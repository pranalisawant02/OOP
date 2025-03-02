#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    // Default constructor
    Vehicle() {
        brand = "Unknown";
        year = 0;
        cout << "Vehicle created with default constructor" << endl;
    }

    // Parameterized constructor
    Vehicle(string b, int y) {
        brand = b;
        year = y;
        cout << "Vehicle created with parameterized constructor" << endl;
    }

    // Display function
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;

public:
    // Default constructor for Car, calls the default constructor of Vehicle
    Car() {
        doors = 4;
        cout << "Car created with default constructor" << endl;
    }

    // Parameterized constructor for Car, calls the parameterized constructor of Vehicle
    Car(string b, int y, int d) : Vehicle(b, y) {
        doors = d;
        cout << "Car created with parameterized constructor" << endl;
    }

    // Display function specific to Car
    void display() {
        Vehicle::display();  // Calls the display function of Vehicle
        cout << "Doors: " << doors << endl;
    }
};

int main() {
    // Using default constructor of Car, which calls the default constructor of Vehicle
    Car car1;
    car1.display();

    // Using parameterized constructor of Car, which calls the parameterized constructor of Vehicle
    Car car2("Toyota", 2020, 4);
    car2.display();

    return 0;
}
