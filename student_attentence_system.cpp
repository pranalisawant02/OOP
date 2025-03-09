#include <iostream>
using namespace std;

int main() {
    string students[3] = {"Alice", "Bob", "Charlie"};
    bool attendance[3] = {false, false, false};

    for (int i = 0; i < 3; i++) {
        char mark;
        cout << "Is " << students[i] << " present? (y/n): ";
        cin >> mark;
        attendance[i] = (mark == 'y' || mark == 'Y');
    }

    cout << "\nAttendance Report:\n";
    for (int i = 0; i < 3; i++) {
        cout << students[i] << ": " << (attendance[i] ? "Present" : "Absent") << endl;
    }

    return 0;
}
