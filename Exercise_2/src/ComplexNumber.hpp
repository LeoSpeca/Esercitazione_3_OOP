#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

#include <iostream>

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double real, double imag);

    void display() const;
    ComplexNumber conjugate() const;

    // Operator overloads
    ComplexNumber operator+(const ComplexNumber& other) const;
    bool operator==(const ComplexNumber& other) const;
};

#endif // COMPLEXNUMBER_HPP
