#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature;

    // Menu
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Celsius to Kelvin" << endl;
    cout << "3. Fahrenheit to Celsius" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;
    cout << "5. Kelvin to Celsius" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    // Input temperature value
    cout << "Enter temperature value: ";
    cin >> temperature;

    // Convert based on user choice
    switch(choice) {
        case 1:
            // Celsius to Fahrenheit
            cout << temperature << " Celsius is equal to " << (temperature * 9/5) + 32 << " Fahrenheit" << endl;
            break;
        case 2:
            // Celsius to Kelvin
            cout << temperature << " Celsius is equal to " << temperature + 273.15 << " Kelvin" << endl;
            break;
        case 3:
            // Fahrenheit to Celsius
            cout << temperature << " Fahrenheit is equal to " << (temperature - 32) * 5/9 << " Celsius" << endl;
            break;
        case 4:
            // Fahrenheit to Kelvin
            cout << temperature << " Fahrenheit is equal to " << ((temperature - 32) * 5/9) + 273.15 << " Kelvin" << endl;
            break;
        case 5:
            // Kelvin to Celsius
            cout << temperature << " Kelvin is equal to " << temperature - 273.15 << " Celsius" << endl;
            break;
        case 6:
            // Kelvin to Fahrenheit
            cout << temperature << " Kelvin is equal to " << ((temperature - 273.15) * 9/5) + 32 << " Fahrenheit" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
