#include <iostream>
using namespace std;

// Even or Odd Checker
void checkEvenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is Even.\n";
    else
        cout << num << " is Odd.\n";
}

// Factorial Calculator
void calculateFactorial() {
    int num;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial << "\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n1. Check Even or Odd\n2. Calculate Factorial\n3. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: checkEvenOdd(); break;
            case 2: calculateFactorial(); break;
            case 3: return 0;
            de
