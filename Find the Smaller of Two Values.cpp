#include <iostream>
using namespace std;

template <typename T>
T findSmaller(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 8;
    cout << "Smaller of " << int1 << " and " << int2 << " is " << findSmaller(int1, int2) << endl;

    double double1 = 3.14, double2 = 2.71;
    cout << "Smaller of " << double1 << " and " << double2 << " is " << findSmaller(double1, double2) << endl;

    char char1 = 'A', char2 = 'Z';
    cout << "Smaller of " << char1 << " and " << char2 << " is " << findSmaller(char1, char2) << endl;

    return 0;
}
