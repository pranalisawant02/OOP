#include <iostream>
using namespace std;

int main() {
    int number, limit;

    // Ask the user for the number they want the table for
    cout << "Enter a number: ";
    cin >> number;

    // Ask the user for the limit of the multiplication table
    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    // Print the multiplication table for the given number
    cout << "\nMultiplication Table for " << number << ":\n";
    for (int i = 1; i <= limit; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
