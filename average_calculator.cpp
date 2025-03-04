#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3, average;

    // Input the three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Calculate the average
    average = (num1 + num2 + num3) / 3;

    // Output the average
    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
