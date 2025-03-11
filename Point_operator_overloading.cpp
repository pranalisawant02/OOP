#include <iostream>

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload the '+' operator
    Point operator + (const Point& p) const {
        return Point(x + p.x, y + p.y);
    }

    // Overload the '-' operator
    Point operator - (const Point& p) const {
        return Point(x - p.x, y - p.y);
    }

    // Overload the '==' operator
    bool operator == (const Point& p) const {
        return (x == p.x && y == p.y);
    }

    // Overload the '<<' operator for output
    friend std::ostream& operator << (std::ostream& out, const Point& p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }

    // Overload the '>>' operator for input
    friend std::istream& operator >> (std::istream& in, Point& p) {
        in >> p.x >> p.y;
        return in;
    }
};

int main() {
    Point p1(3, 4), p2(1, 2);

    Point sum = p1 + p2;
    Point diff = p1 - p2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    if (p1 == p2) {
        std::cout << "Points are equal." << std::endl;
    } else {
        std::cout << "Points are not equal." << std::endl;
    }

    return 0;
}
