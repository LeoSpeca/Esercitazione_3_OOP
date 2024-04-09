#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(double real, double imag) : real(real), imag(imag) {}

void ComplexNumber::display() const {
    std::cout << real;
    if (imag >= 0)
        std::cout << "+";
    std::cout << imag << "i";
}

ComplexNumber ComplexNumber::conjugate() const {
    return ComplexNumber(real, -imag);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

bool ComplexNumber::operator==(const ComplexNumber& other) const {
    return (real == other.real) && (imag == other.imag);
}
