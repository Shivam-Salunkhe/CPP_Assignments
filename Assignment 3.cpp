#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(10, 20);
    Complex c3(5, 15);

    cout << "Default Constructor Object: ";
    c1.display();

    cout << "First Complex Number: ";
    c2.display();

    cout << "Second Complex Number: ";
    c3.display();

    Complex c4 = c2 + c3;

    cout << "Addition of Complex Numbers: ";
    c4.display();

    return 0;
}
