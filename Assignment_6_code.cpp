
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void getName() {
        cout << "Enter name: ";
        getline(cin >> ws, name);
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class SingleEmployee : public Person {
private:
    int empId;

public:
    void input() {
        getName();
        cout << "Enter Employee ID: ";
        cin >> empId;
    }

    void display() {
        displayName();
        cout << "Employee ID: " << empId << endl;
    }
};

class Worker {
protected:
    string workerName;

public:
    void inputWorker() {
        cout << "Enter worker name: ";
        getline(cin >> ws, workerName);
    }
};

class Employee : public Worker {
protected:
    int empId;

public:
    void inputEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void inputManager() {
        inputWorker();
        inputEmployee();
        cout << "Enter department: ";
        getline(cin >> ws, department);
    }

    void displayManager() {
        cout << "Worker Name: " << workerName << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void inputStudent() {
        getName();
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        displayName();
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    void inputTeacher() {
        getName();
        cout << "Enter Subject: ";
        getline(cin >> ws, subject);
    }

    void displayTeacher() {
        displayName();
        cout << "Subject: " << subject << endl;
    }
};

class Academics {
protected:
    float marks;

public:
    void inputMarks() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    float sportsScore;

public:
    void inputSports() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
};

class AllRounder : public Academics, public Sports {
public:
    void displayResult() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Combined Score: "
             << marks + sportsScore << endl;
    }
};

class HybridPerson {
protected:
    string personName;

public:
    HybridPerson(string n) {
        personName = n;
    }
};

class HybridStudent : virtual public HybridPerson {
protected:
    int rollNo;

public:
    HybridStudent(int r) : HybridPerson(""), rollNo(r) {}
};

class HybridEmployee : virtual public HybridPerson {
protected:
    int employeeId;

public:
    HybridEmployee(int id) : HybridPerson(""), employeeId(id) {}
};

class TeachingAssistant : public HybridStudent,
                          public HybridEmployee {
public:
    TeachingAssistant(string n, int r, int id)
        : HybridPerson(n), HybridStudent(r),
          HybridEmployee(id) {}

    void display() {
        cout << "Name: " << personName << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main() {
    cout << "===== 1. Single Inheritance =====" << endl;
    SingleEmployee se;
    se.input();
    se.display();

    cout << "\n===== 2. Multilevel Inheritance =====" << endl;
    Manager m;
    m.inputManager();
    m.displayManager();

    cout << "\n===== 3. Hierarchical Inheritance =====" << endl;

    cout << "\nStudent Details:" << endl;
    Student st;
    st.inputStudent();
    st.displayStudent();

    cout << "\nTeacher Details:" << endl;
    Teacher t;
    t.inputTeacher();
    t.displayTeacher();

    cout << "\n===== 4. Multiple Inheritance =====" << endl;
    AllRounder ar;
    ar.inputMarks();
    ar.inputSports();
    ar.displayResult();

    cout << "\n===== 5. Hybrid Inheritance =====" << endl;

    string name;
    int roll, id;

    cout << "Enter teaching assistant name: ";
    getline(cin >> ws, name);

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter employee ID: ";
    cin >> id;

    TeachingAssistant ta(name, roll, id);
    ta.display();

    return 0;
}

