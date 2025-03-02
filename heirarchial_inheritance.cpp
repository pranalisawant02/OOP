#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor for Person class
    Person(string n, int a) : name(n), age(a) {}

    // Display function for Person class
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class 1: Student
class Student : public Person {
private:
    int studentID;

public:
    // Constructor for Student class
    Student(string n, int a, int id) : Person(n, a), studentID(id) {}

    // Display function for Student class
    void displayStudent() {
        displayPerson();  // Call base class function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class 2: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor for Teacher class
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {}

    // Display function for Teacher class
    void displayTeacher() {
        displayPerson();  // Call base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create objects of derived classes
    Student student1("Alice", 20, 101);
    Teacher teacher1("Mr. John", 45, "Mathematics");

    // Display information of Student
    cout << "Student Information: " << endl;
    student1.displayStudent();

    // Display information of Teacher
    cout << "\nTeacher Information: " << endl;
    teacher1.displayTeacher();

    return 0;
}
