#include <iostream>
using namespace std;

int main() {
    string username, password;
    string correctUsername = "admin";
    string correctPassword = "1234";
    int attempts = 3;

    while (attempts > 0) {
        cout << "\nEnter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "\nLogin Successful!\n";
            return 0;
        } else {
            attempts--;
            cout << "\nIncorrect username or password. Attempts left: " << attempts << "\n";
        }
    }

    cout << "\nToo many failed attempts. Access denied!\n";
    return 0;
}
