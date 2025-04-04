#include <iostream>
using namespace std;

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char arrChar[] = {'A', 'B', 'C', 'D'};

    cout << "Integer Array: ";
    printArray(arrInt, 5);

    cout << "Double Array: ";
    printArray(arrDouble, 5);

    cout << "Char Array: ";
    printArray(arrChar, 4);

    return 0;
}
