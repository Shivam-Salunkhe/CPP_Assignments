
#include <iostream>
#include <string>
using namespace std;

class StudentRecord {
private:
    int rollNo;
    string name;
    float marks;

    static int studentCount;

public:
    StudentRecord(int roll, string n, float m) {
        this->rollNo = roll;
        this->name = n;
        this->marks = m;
        studentCount++;
    }

    inline void displayStudent() {
        cout << "\nRoll Number: " << this->rollNo << endl;
        cout << "Name: " << this->name << endl;
        cout << "Marks: " << this->marks << endl;
    }

    void updateMarks(float marks) {
        this->marks = marks;
    }

    static void displayCount() {
        cout << "\nTotal Students: " << studentCount << endl;
    }

    friend class Result;
};

int StudentRecord::studentCount = 0;

class Result {
public:
    void displayResult(StudentRecord &s) {
        cout << "\n--- Student Result ---" << endl;
        cout << "Student Name: " << s.name << endl;
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Marks: " << s.marks << endl;

        if (s.marks >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    int roll;
    string name;
    float marks;

    cout << "===== Student Management System =====" << endl;

    cout << "\nEnter details of Student 1:" << endl;
    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    getline(cin >> ws, name);

    cout << "Enter Marks: ";
    cin >> marks;

    StudentRecord s1(roll, name, marks);

    cout << "\nEnter details of Student 2:" << endl;
    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    getline(cin >> ws, name);

    cout << "Enter Marks: ";
    cin >> marks;

    StudentRecord s2(roll, name, marks);

    cout << "\n===== Student Details =====" << endl;

    s1.displayStudent();
    s2.displayStudent();

    cout << "\n===== Update Student 1 Marks =====" << endl;
    cout << "Enter new marks for Student 1: ";
    cin >> marks;

    s1.updateMarks(marks);

    cout << "\nUpdated Student 1 Details:";
    s1.displayStudent();

    StudentRecord::displayCount();

    Result r;

    r.displayResult(s1);
    r.displayResult(s2);

    return 0;
}

