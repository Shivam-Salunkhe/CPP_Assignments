#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:

    Student()
    {
        name = "Unknown";
        rollNo = 0;
        marks = 0;
        cout << "Default Constructor called." << endl;
    }

    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Parameterized Constructor called." << endl;
    }

    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy Constructor called." << endl;
    }

    void display()
    {
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }

    void calculateGrade()
    {
        if (marks >= 75)
            cout << "Grade  : A" << endl;
        else if (marks >= 60)
            cout << "Grade  : B" << endl;
        else if (marks >= 50)
            cout << "Grade  : C" << endl;
        else if (marks >= 40)
            cout << "Grade  : D" << endl;
        else
            cout << "Grade  : F" << endl;
    }

    ~Student()
    {
        cout << "Destructor called for " << name << "." << endl;
    }
};

int main()
{
   
    Student s1;

    cout << "\n Default Constructor Object " << endl;
    s1.display();
    s1.calculateGrade();

    cout << "\n Parameterized Constructor Object " << endl;
    Student s2("Shivam Salunkhe", 101, 85.5);
    s2.display();
    s2.calculateGrade();

    cout << "\n Copy Constructor Object " << endl;
    Student s3(s2);
    s3.display();
    s3.calculateGrade();

    return 0;
}
