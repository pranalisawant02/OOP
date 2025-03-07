#include <iostream>
using namespace std;

// Leap Year Checker
void checkLeapYear() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year.\n";
    } else {
        cout << year << " is NOT a Leap Year.\n";
    }
}

int main() {
    checkLeapYear();
    return 0;
}
