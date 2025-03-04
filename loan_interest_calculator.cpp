#include <iostream>

using namespace std;

int main() {
    float principal, rate, time, interest, totalAmount;

    // User input
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculate simple interest: Interest = (Principal * Rate * Time) / 100
    interest = (principal * rate * time) / 100;

    // Calculate total amount to be paid back
    totalAmount = principal + interest;

    // Output the result
    cout << "\n----- Loan Details -----" << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest Rate: " << rate << "%" << endl;
    cout << "Time: " << time << " years" << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Total Amount to be paid back: $" << totalAmount << endl;

    return 0;
}
