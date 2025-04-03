#include <iostream>
using namespace std;

template <typename T>
class Rectangle {
private:
    T length;
    T breadth;

public:
    // Constructor
    Rectangle(T l, T b) {
        length = l;
        breadth = b;
    }

    // Calculate area
    T calculate_area() {
        return length * breadth;
    }

    // Calculate perimeter
    T calculate_perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    // Input values
    double l, b;
    cout << "Enter the length & breadth of the rectangle:" << endl;
    cin >> l >> b;

    // Create object with template type
    Rectangle<double> r1(l, b);

    // Display results
    cout << "Area = " << r1.calculate_area() << endl;
    cout << "Perimeter = " << r1.calculate_perimeter() << endl;

    return 0;
}
