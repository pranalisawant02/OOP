#include <iostream>
using namespace std;

// Base Class
class Vehicle {
protected:
    string vehicleID, make, model; // Unique ID, manufacturer, and model name
    int year; // Year of manufacture
    bool isRented; // Rental status (true if rented, false if available)
    double dailyRentalRate; // Cost per day to rent the vehicle

public:
    // Constructor to initialize the vehicle
    Vehicle(string id, string mk, string mdl, int yr, double rate)
        : vehicleID(id), make(mk), model(mdl), year(yr), dailyRentalRate(rate), isRented(false) {}

    virtual ~Vehicle() {} // Virtual destructor

    // Getter functions to access private details
    string getVehicleID() const { return vehicleID; } // Returns the vehicle ID
    bool getIsRented() const { return isRented; } // Returns rental status (true/false)

    // Pure virtual function to calculate rental cost
    virtual double calculateRentalCost(int days) const = 0;

    // Function to display vehicle details
    virtual void displayDetails() const {
        cout << "Vehicle ID: " << vehicleID << "\n";
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
        cout << "Daily Rental Rate: $" << dailyRentalRate << "\n";
        cout << "Status: " << (isRented ? "Rented" : "Available") << "\n";
    }

    // Function to rent a vehicle
    void rentVehicle() { 
        isRented = true; // Mark the vehicle as rented
    }

    // Function to return a vehicle
    void returnVehicle() { 
        isRented = false; // Mark the vehicle as available
    }
};

// Derived Class: Car
class Car : public Vehicle {
    int numberOfDoors;
    string fuelType;

public:
    Car(string id, string mk, string mdl, int yr, double rate, int doors, string fuel)
        : Vehicle(id, mk, mdl, yr, rate), numberOfDoors(doors), fuelType(fuel) {}

    double calculateRentalCost(int days) const {
        return dailyRentalRate * days;
    }

    void displayDetails() const {
        Vehicle::displayDetails();
        cout << "Doors: " << numberOfDoors << "\nFuel: " << fuelType << "\n";
    }
};

// Rental System Class
class RentalSystem {
    Vehicle* vehicles[10]; // Array to store vehicles
    int vehicleCount; // Number of vehicles stored

public:
    RentalSystem() : vehicleCount(0) {}

    void addVehicle(Vehicle* vehicle) {
        if (vehicleCount < 10) 
            vehicles[vehicleCount++] = vehicle;
    }

    void displayAvailableVehicles() const {
        for (int i = 0; i < vehicleCount; i++) {
            if (!vehicles[i]->getIsRented()) 
                vehicles[i]->displayDetails();
        }
    }

    Vehicle* findVehicle(const string &id) {
        for (int i = 0; i < vehicleCount; i++)
            if (vehicles[i]->getVehicleID() == id) 
                return vehicles[i];
        return NULL; // Fixed: Changed from nullptr to NULL for older C++ compatibility
    }

    void rentVehicle(const string &id, int days) {
        Vehicle* v = findVehicle(id);
        if (v != NULL && !v->getIsRented()) {
            v->rentVehicle();
            cout << "Rental Cost: $" << v->calculateRentalCost(days) << "\n";
        } else {
            cout << "Not available.\n";
        }
    }

    void returnVehicle(const string &id) {
        Vehicle* v = findVehicle(id);
        if (v != NULL && v->getIsRented()) {
            v->returnVehicle();
            cout << "Returned successfully.\n";
        } else {
            cout << "Not found or not rented.\n";
        }
    }
};

// Main Function
int main() {
    RentalSystem system;
    Car car1("CAR123", "Toyota", "Corolla", 2020, 50, 4, "Petrol");
    system.addVehicle(&car1);

    int choice;
    while (true) {
        cout << "\n1. Display Vehicles\n2. Rent\n3. Return\n4. Find & Display\n5. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                system.displayAvailableVehicles(); 
                break;
            case 2: {
                string id; 
                int days;
                cout << "Enter Vehicle ID: "; 
                cin >> id;
                cout << "Enter number of days: "; 
                cin >> days;
                system.rentVehicle(id, days);
                break;
            }
            case 3: {
                string id;
                cout << "Enter Vehicle ID: "; 
                cin >> id;
                system.returnVehicle(id);
                break;
            }
            case 4: {
                string id;
                cout << "Enter Vehicle ID: "; 
                cin >> id;
                Vehicle* v = system.findVehicle(id);
                if (v != NULL) 
                    v->displayDetails();
                else 
                    cout << "Vehicle not found.\n";
                break;
            }
            case 5: 
                return 0;
            default: 
                cout << "Invalid choice.\n";
        }
    }
}
