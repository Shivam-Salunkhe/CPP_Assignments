# Assignment 3 - Operator Overloading

## Title
Write a program on Operator Overloading using Default and Parameterized Constructors.

## Objective

1. To understand the concept of operator overloading in C++.
2. To implement default and parameterized constructors.
3. To overload the `+` operator for user-defined objects.
4. To understand classes and objects in C++.
5. To apply object-oriented programming concepts.

## Problem Statement

Write a C++ program to demonstrate operator overloading using default and parameterized constructors. The program should perform addition of two complex numbers by overloading the `+` operator.

## Theory

### Operator Overloading

Operator overloading is a feature of C++ that allows existing operators such as `+`, `-`, `*`, and `==` to be used with user-defined data types such as classes and objects.

In this program, the `+` operator is overloaded to add two complex number objects.

### Default Constructor

A default constructor is a constructor that does not take any arguments. It is automatically called when an object is created without passing any arguments.

Example:

```cpp
Complex()
{
    real = 0;
    imag = 0;
}
