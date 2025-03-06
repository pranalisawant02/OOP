class Student {
private:
    string name;
    int grades[5];
public:
    Student(string studentName, int studentGrades[5]) {
        name = studentName;
        for (int i = 0; i < 5; i++)
            grades[i] = studentGrades[i];
    }

    double calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += grades[i];
        return sum / 5.0;
    }
};
