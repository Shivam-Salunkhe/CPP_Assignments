# Student Management System in C++

## Practical Title
Assignment Based on Classes, Objects, This Pointer, Inline Function, Static Member Function and Friend Class.

## Objective
To develop a C++ program that demonstrates the concepts of classes, objects, the this pointer, inline functions, static member functions, and friend classes using a Student Management System.

## Problem Statement
Write a C++ program to accept student details such as roll number, name, and marks from the user. Display student details, update marks, count the total number of students using a static member function, and display the result using a friend class.

## Software Requirements
- **Programming Language:** C++
- **IDE:** Dev-C++ / Visual Studio Code
- **Compiler:** GCC / MinGW C++ Compiler

## Theory Concepts

### 1. Class
A class is a user-defined data type that combines data members and member functions into a single unit.

### 2. Objects
Objects are instances of a class. In this program, `s1` and `s2` are objects of the `StudentRecord` class, and `r` is an object of the `Result` class.

### 3. This Pointer
The `this` pointer refers to the current object of the class. It is used to access the current object's members.

Example:
```cpp
this->rollNo = roll;
this->name = n;
this->marks = m;
```

### 4. Inline Function
An inline function suggests that the compiler may expand the function at the point of its call to reduce function-call overhead.

Example:
```cpp
inline void displayStudent()
```

### 5. Static Member Function
A static member function belongs to the class rather than an individual object. It can access static data members directly.

Example:
```cpp
static void displayCount()
```

### 6. Friend Class
A friend class can access the private and protected members of the class that declares it as a friend.

Example:
```cpp
friend class Result;
```

## Algorithm
1. Start the program.
2. Define the `StudentRecord` class with roll number, name, and marks as private data members.
3. Declare a static variable to count the number of student objects.
4. Create a constructor to initialize student details using the `this` pointer.
5. Define an inline function to display student details.
6. Define a member function to update student marks.
7. Define a static member function to display the total number of students.
8. Declare the `Result` class as a friend of `StudentRecord`.
9. Accept details of two students from the user.
10. Create objects for both students and display their details.
11. Update the marks of the first student.
12. Display the total number of students.
13. Use the friend class to display marks and determine whether each student has passed or failed.
14. Stop the program.

## Test Cases

| Test Case | Input | Expected Output | Status |
|---|---|---|---|
| 1 | Roll No: 101, Name: Rahul Patil, Marks: 85 | Student details displayed correctly | Pass |
| 2 | Roll No: 102, Name: Amit Sharma, Marks: 35 | Student details displayed correctly | Pass |
| 3 | Update Student 1 marks to 90 | Updated marks displayed as 90 | Pass |
| 4 | Two student objects created | Total Students: 2 | Pass |
| 5 | Marks: 90 | Result: Pass | Pass |
| 6 | Marks: 35 | Result: Fail | Pass |

*Note: The status column represents the expected result. Confirm the actual output by running the program.*

## Results / Observations
- The program successfully accepts student details from the user.
- Classes and objects are used to represent student records.
- The `this` pointer accesses the current object's data members.
- The inline function displays student details.
- The static member function displays the total number of students.
- The friend class accesses private student information to calculate the result.
- The program updates student marks and determines pass or fail status.

## Conclusion
The Student Management System demonstrates the implementation of important object-oriented programming concepts in C++. It provides practical understanding of classes, objects, the this pointer, inline functions, static member functions, and friend classes.

## Expected Outcomes
- Understand the fundamentals of classes and objects.
- Learn how to use the `this` pointer.
- Understand inline and static member functions.
- Learn how friend classes access private members.
- Develop a simple student record management program using C++.

## How to Run
1. Copy the C++ source code into a file named `main.cpp`.
2. Open the file in Dev-C++ or Visual Studio Code.
3. Compile the program using a C++ compiler.
4. Run the executable.
5. Enter the details of two students when prompted.
6. Verify the displayed student records, updated marks, student count, and results.

## Author
Shivam Salunkhe

## Language
C++
