#include <iostream>
#include <map>
#include <vector>
#include <numeric> // for accumulate
#include <algorithm> // for max_element
#include <string>

using namespace std;

// Function to calculate average of marks
double calculateAverage(const vector<int>& marks) {
    if (marks.empty()) return 0.0;
    int sum = accumulate(marks.begin(), marks.end(), 0);
    return static_cast<double>(sum) / marks.size();
}

int main() {
    map<string, vector<int>> studentRecords;
    int choice;

    do {
        cout << "\nStudent Marks Management System\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Display Topper\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                vector<int> marks(3);
                cout << "Enter student name: ";
                cin >> name;
                cout << "Enter marks for 3 subjects: ";
                for (int& mark : marks) {
                    cin >> mark;
                }
                studentRecords[name] = marks;
                break;
            }

            case 2: {
                cout << "\nStudent Records:\n";
                for (const auto& pair : studentRecords) {
                    const string& name = pair.first;
                    const vector<int>& marks = pair.second;
                    double average = calculateAverage(marks);

                    cout << "Student: " << name << ", Marks: ";
                    for (int mark : marks) {
                        cout << mark << " ";
                    }
                    cout << ", Average: " << average << "\n";
                }
                break;
            }

            case 3: {
                if (studentRecords.empty()) {
                    cout << "No records available.\n";
                    break;
                }

                auto topper = max_element(studentRecords.begin(), studentRecords.end(),
                    [](const pair<string, vector<int>>& a, const pair<string, vector<int>>& b) {
                        return calculateAverage(a.second) < calculateAverage(b.second);
                    });

                double topperAverage = calculateAverage(topper->second);
                cout << "Topper: " << topper->first << " with average " << topperAverage << "\n";
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 4);

    return 0;
}
