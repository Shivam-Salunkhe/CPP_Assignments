#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Constructor called." << endl;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }

    void checkResult() {
        if (marks >= 40)
            cout << "Result : Pass" << endl;
        else
            cout << "Result : Fail" << endl;
    }

    ~Student() {
        cout << "\nDestructor called. Object destroyed." << endl;
    }
};

int main() {
    Student s("Shivam Salunkhe", 101, 85.5);

    s.display();
    s.checkResult();

    return 0;
}
