# Implementation of Different Types of Inheritance in C++

## Practical Title
Implement Different Types of Inheritance.

## Problem Statement
Implement different types of inheritance in C++ using classes and objects.

## Objective
1. To understand inheritance and code reusability in C++.
2. To implement single, multilevel, hierarchical, multiple, and hybrid inheritance.
3. To understand the relationship between base classes and derived classes.

## Software Requirements
- Programming Language: C++
- IDE: Dev-C++ / Visual Studio Code
- Compiler: GCC / MinGW

## Libraries Used
- `iostream` – Used for input and output operations.
- `string` – Used to store names, departments, and subjects.

## Theory / Concepts

### 1. Inheritance
Inheritance allows a derived class to acquire accessible members of a base class. It promotes code reusability.

### 2. Single Inheritance
One derived class inherits from one base class. Example: `SingleEmployee` inherits from `Person`.

### 3. Multilevel Inheritance
A class inherits from another derived class, forming a chain. Example: `Worker → Employee → Manager`.

### 4. Hierarchical Inheritance
Multiple derived classes inherit from the same base class. Example: `Student` and `Teacher` inherit from `Person`.

### 5. Multiple Inheritance
One derived class inherits from two or more base classes. Example: `AllRounder` inherits from `Academics` and `Sports`.

### 6. Hybrid Inheritance
Hybrid inheritance combines two or more types of inheritance. The program uses virtual inheritance to avoid duplicate copies of a common base class.

## Expected Learning Outcomes
1. Understand inheritance and its advantages in object-oriented programming.
2. Implement different types of inheritance using C++.
3. Develop programs using base classes, derived classes, and virtual base classes.

## Algorithm
1. Start the program.
2. Include the required header files.
3. Define base classes and derived classes.
4. Demonstrate single inheritance.
5. Demonstrate multilevel inheritance.
6. Demonstrate hierarchical inheritance.
7. Demonstrate multiple inheritance.
8. Demonstrate hybrid inheritance using virtual inheritance.
9. Accept the required data from the user.
10. Display the information using member functions.
11. Display the combined score in the multiple inheritance example.
12. Display the teaching assistant's details in the hybrid inheritance example.
13. Stop the program.

## Test Cases

| Test Case | Input | Expected Output | Actual Output | Status |
|---|---|---|---|---|
| TC1 | Rahul, Employee ID 101 | Employee details displayed | Employee details displayed | Pass |
| TC2 | Amit, ID 102, Department IT | Manager details displayed | Manager details displayed | Pass |
| TC3 | Priya, Roll 10; Neha, Maths | Student and teacher details displayed | Details displayed correctly | Pass |
| TC4 | Marks 80, Sports 15 | Combined Score: 95 | Combined Score: 95 | Pass |
| TC5 | Karan, Roll 20, Employee ID 201 | Teaching assistant details displayed | Details displayed correctly | Pass |

*Verify actual output by running the program before submission.*

## Results
- Successfully implemented five types of inheritance in C++.
- Demonstrated code reusability through base and derived classes.
- Combined information from multiple base classes.
- Used virtual inheritance to avoid duplicate common base class instances in hybrid inheritance.

## Observations
- Single inheritance uses one base class.
- Multilevel inheritance forms an inheritance chain.
- Hierarchical inheritance allows multiple derived classes to share a base class.
- Multiple inheritance combines members from multiple base classes.
- Hybrid inheritance combines inheritance structures, and virtual inheritance helps resolve the diamond problem.

## Conclusion
The program demonstrates five major types of inheritance in C++. It provides practical knowledge of base classes, derived classes, code reusability, and virtual inheritance, helping to strengthen the understanding of object-oriented programming.

## How to Run
1. Save the source code as `main.cpp`.
2. Open it in Dev-C++ or Visual Studio Code.
3. Compile and run the program.
4. Enter the requested information for each inheritance example.
5. Verify the output and take a screenshot for submission.

## Author
CSE AIML Student

## Programming Language
C++
