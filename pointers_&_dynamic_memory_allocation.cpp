#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    cout << "Enter a number: ";
    cin >> *ptr;
    cout << "You entered: " << *ptr << endl;
    delete ptr; // Free the allocated memory
    return 0;
}
