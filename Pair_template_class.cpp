#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor to initialize the pair
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Getter functions
    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    // Setter functions
    void setFirst(T1 f) {
        first = f;
    }

    void setSecond(T2 s) {
        second = s;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);  // Pair of int and double
    cout << "First: " << p1.getFirst() << ", Second: " << p1.getSecond() << endl;

    Pair<string, bool> p2("Hello", true);  // Pair of string and bool
    cout << "First: " << p2.getFirst() << ", Second: " << p2.getSecond() << endl;

    return 0;
}
